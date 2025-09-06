//program to convert number to string manually(instead of to_string)
#include <bits/stdc++.h>
using namespace std;

string toString(int num){
    if(num == 0) return "0";

    int a = num;
    if(a < 0){
        a = -a;
    }

    string s = "";

    while(a != 0){
        int last = a % 10;
        s.push_back('0'+last);
        a = a/10;
    }

    if(num < 0) s.push_back('-');
    reverse(s.begin(), s.end());
    return s;
}


int main()
{
    cout << toString(12345) << endl;
    cout << toString(-789) << endl;
}

// Time complexity : O(no. of digits) = O(log₁₀(n))
// Space complexity : O(no. of digits)
