#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    int i = 2, sum = 0;

    while (i<=n)
    {
        if(i%2 == 0){
            sum = sum + i;
        }
        i = i+1;
    }
    cout << "Sum of even numbers is: " << sum << endl;
    
}