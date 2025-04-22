#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    while(row <= n)
    {

        // print spaces
        int space = n - row;
        while(space)
        {
            cout << " ";
            space -= 1;
        }


        //print 1st triangle
        int col = 1;
        while(col<=row)
        {
            cout << col;
            col += 1;
        }

        //print 2nd triangle
/*
        int c = 2;
        int b = 1;
        while (c <= row)
        {
            cout << row - c + 1;
            b += 1;
            c += 1;
        }
*/

        int start = row - 1;
        while(start)
        {
            cout << start;
            start -= 1;
        }
        cout << endl;
        row += 1;
    }
}