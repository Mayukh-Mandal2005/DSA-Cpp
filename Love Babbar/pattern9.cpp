#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    /*
        while(row <= n){
            char start = 64 + row;     // 'A' has 64 ASCII value.
            int col = 1;
            while (col<=n)
            {
                cout << start;
                col += 1;
                start += 1;
            }
            cout << endl;
            row += 1;
        }
    */

    /*
        char start = 'A';
        while (row <= n)
        {
            int column = 1;
            while (column <= n)
            {
                cout << start;
                // incrementing start and resetting it to 'A' + row number  later
                start++;
                column++;
            }
            cout << endl;
            start = 'A' + row;
            row++;
        }/
    */


   /*
   while (row<=n)
   {
        int col = 1;
        while (col<=n)
        {
            char start = 'A' + row + col - 2;
            cout << start;                  // i+j-1 = 'A'
            col += 1;                    // 'A'+i+j-2 = 'A'
        }
        cout << endl;
        row += 1;
        
   }
   */

    // easier way using start character
    while (row <= n)
    {
        int col = 1;
        char start = 'A' + row - col;
        while(col<=n)
        {
            cout << start;
            col += 1;
            start += 1;
        }
        cout << endl;
        row += 1;
  }
   
}