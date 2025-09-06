#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(int num){
    int temp = num, reverse = 0;
    while(temp != 0){
        int digit = temp % 10;
        reverse = reverse*10+digit;
        temp /= 10;
    }
    return num == reverse;
}

int nextPalindrome(int num){
    int i = 1;
    if(isPalindrome(num+i)){
        return (num+i);
    }
    return nextPalindrome(num+i);
}

// int nextPalindrome(int n){
//     string s = to_string(n);
//     int mid = 0;
//     if(s.length() % 2 == 0){
//         mid = s.length() % 2;
//     }
//     else{
//         mid = s.length()%2 + 1;
//     }

//     string firstHalf = s.substr(0, mid);
//     string revHalf = firstHalf;
//     reverse(revHalf.begin(), revHalf.end());
//     string next = firstHalf + revHalf;

//     int palindrome = stoi(next);

//     if(palindrome > n) return palindrome;
//     else{
//         int number = stoi(firstHalf);
//         number += 1;
//         string num = to_string(number);

//     }
// }

int main()
{
    int n;
    cin >> n;
    cout << nextPalindrome(n) << endl;
}
