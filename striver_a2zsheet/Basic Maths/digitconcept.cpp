#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;


    /*one way to count digits in a given number*/
    // int count = 0;
    // while(n!=0){
    //     int a = n % 10;
    //     n = n / 10;
    //     count += 1;
    // }

    /*another way is to use log of that number with base 10 and add 1 to it
    for example log10(7789) = 3.81
    add 1
    we get 4.81 and take the integer part which gives 4
    4 digits in this number*/

    int cnt = (int)(log10(n)+1);
    cout << cnt << endl;

    /*Time Complexity: log10(n)*/
}
