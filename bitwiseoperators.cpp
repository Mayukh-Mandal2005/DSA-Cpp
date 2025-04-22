#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;

    cout << "a & b: " << (a & b) << endl;
    cout << "a or b: " << (a | b) << endl;
    cout << "not of a: " << (~a) << endl;
    cout << "a ^ b: " << (a ^ b) << endl;

    // right shift
    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;

    //left shift
    cout << (19 << 1) << endl;
    cout << (21<<2) << endl;


    //pre and post increment/decrement operators
    int i = 10;

    cout << (i++) << endl;
    // 10, i = 11
    cout << (++i) << endl;
    // 12, i = 12
    cout << (i--) << endl;
    // 12, i = 11
    cout << (--i) << endl;
    // 10, i = 10
}