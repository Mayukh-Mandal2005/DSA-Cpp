#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 1;
    while (i<=n)        
    // jitni rows hai utni baar loop chlega for every row
    {
        int j = 1;
        while(j<=n)     
        //jitni columns hai utni baar loop chlega for every column
        {
            cout << i;
            j = j+1;
        }
        cout << endl;
        i = i+1;
    }
    
}