#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    while(row<=n)
    {
        int space = row - 1;
        while(space)
        {
            cout << " ";
            space -= 1;
        }

        int col = 1;
        int a = row;
        while(col<=(n-row+1))
        {   cout << a;
            col += 1;
            a += 1;
        }
        cout << endl;
        row += 1;
    }
}