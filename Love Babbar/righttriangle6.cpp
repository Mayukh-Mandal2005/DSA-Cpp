#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
\
    int row = 1;
    /*
    while (row<=n)
    {
        int col = 1;
        char ch = 64 + row;
        while (col<=row)
        {   
            cout << ch;
            col += 1;
        }
        cout << endl;
        row += 1;
        
    }
    */

   while (row<=n)
   {
        int col = 1;
        while (col<=row)
        {
            char ch = 'A'+row-1;
            cout << ch ;
            col += 1;
        }
        cout << endl;
        row += 1;
        
   }
    
}