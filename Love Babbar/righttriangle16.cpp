#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    int a = row;
    while(row <= n)
    {
        int space = n - row;
        while(space)
        {
            cout << " ";
            space -= 1;
        }

        int col = 1;
        while(col <= row)
        {
            cout << a;
            col += 1;
            a += 1;
        }
        cout << endl;
        row += 1;
    }
}