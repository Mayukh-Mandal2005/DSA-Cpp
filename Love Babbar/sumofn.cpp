#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    int i=1 , sum = 0;
    
    while (i<=n)
    {
        sum = sum+i;
        i = i+1;
    }
    cout << "Sum of the numbers is: " << sum << endl;
}