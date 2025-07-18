#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float f;
    cout << "Enter temperature: " << endl;
    cin >> f;

    float c = ((f-32)*5)/9;

    cout << "Temperature in degree celsius is: " << c << endl;
}