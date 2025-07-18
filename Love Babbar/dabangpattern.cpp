#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 0;
    while(i < n)
    {
        //first triangle(12345)
        int j = 1;
        while(j <= (n-i))
        {
            cout << j;
            j += 1;
        }

        //print stars(*)
        int star = 2*i;
        while(star)
        {
            cout << "*";
            star -= 1;
        }

        //second triangle9(54321)
        int col = n - i;
        while(col)
        {   
            cout << col;
            col-=1;
        }
        cout << endl;
        i += 1;
    }
}