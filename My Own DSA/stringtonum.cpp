//program to convert string to number manually instead of stoi
#include <bits/stdc++.h>
using namespace std;

int toNumber(string s){
    int n = s.size();
    bool neg = false;
    int i = 0;

    if(s[0] == '-'){
        neg = true;
        i++;
    }

    int result = 0;
    while(i < n){
        result = result*10 + (s[i]-'0');
        i++;
    }

    return (neg ? -result : result);
}

int main()
{
    string s;
    cin >> s;
    cout << toNumber(s) << endl;
    return 0;
}

//Time Complexity : O(length of string)
//Space Complexity : O(1)
