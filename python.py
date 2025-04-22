'''In this question, you must write a Python program to find the cosine of a number obtained from performing a computation on a value retrieved from the database. 

    Find the sum of scores of all host teams satisfying the following conditions.

        host_team_score > guest_team_score

        name of the host team starts with the character given in the input file ‘parameter.txt’. You have to read the character from the file and use it in your query to retrieve the expected sum. Your program must assume that parameter.txt resides in the same folder as your Python program. 

    Let this sum be denoted by ‘S’. Compute X = S * 10. 

    Assuming that X is a value in radians, convert it into degrees. That is, let X_deg = X * (pi/180).

    Then, using the math library in Python, find cos(X_deg) correct up to two decimal places, where cos denotes the mathematical trigonometric function cosine.

    For example, if the sum of scores of all host teams satisfying the given conditions is 5, then the output is round(cos(5*10*(pi/180)),2).'''


import sys
import os
import psycopg2
import math

with open("parameter.txt","r") as file:
    name = file.read()

try:
    connection = psycopg2.connect(database = sys.argv[1],
                                  user = os.environ.get('PGUSER'),
                                  password = os.environ.get('PGPASSWORD'),
                                  host = os.environ.get('PGHOST'),
                                  port = os.environ.get('PGPORT'))
    
    cursor = connection.cursor()
    query = '''SELECT SUM(host_team_score)
    FROM matches
    WHERE host_team_score > guest_team_score
    AND host_team LIKE %s || '%' '''
    cursor.execute(query,(name,))
    res = cursor.fetchone()

    #computing cosine(fetchone)
    if res:
        s = int(res[0])
        x = s*10
        x_deg = x*(math.pi/180)
        cos = round(math.cos(x_deg),2)
        print(cos)

    cursor.close()

finally:
    connection.close

#formatting string(fetchone)
    if res:
        full_name = res[0]
        name_parts = full_name.split()
        last_name = name_parts[-1]
        initials = " ".join([name[0]+'.' for name in name_parts[:-1]])
        fname = f"{last_name} {initials}"
        print(fname)



#encoding teams(fetchall)
    for res in results:
        new_str = chr(((ord(res[0][0])-65+7)%26)+65)
        for i in res[0][1:]:
            new_str += str((int(i)+7)%10)

        print(new_str)

#prime jersey(fetchall)
    def prime(n):
        if n <=1:
            return False
        for i in range(2,n):
            if n%i==0:
                return False
        return True
    final_res = []
    for res in results:
        if prime(res[2]):
            final_res.append(res[0]+','+' '+res[1])
    final_res.sort(reverse=True)
    for final in final_res:
        print(final)
    

