#include <iostream>
using namespace std;

int main(){
    /*
    int n;
    cin >> n;

    int row = 1;
    while (row<=n)
    {
        int col = 1;
        while (col<=row)
        {   char ch = 'A' + row + col - 2;
            cout << ch;
            col += 1;
        }
        cout << endl;
        row += 1;
    }
    */
    int n;
    cin >> n;

    int i = 1;
    char count = 'A';

    while (i <= n)
    {

        int j = 1;
        while (j <= i)
        {
            cout << count;
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        count = count - (j - 2);
        i = i + 1;
    }
}