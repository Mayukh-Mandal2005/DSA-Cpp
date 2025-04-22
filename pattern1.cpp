#include <iostream>
using namespace std;

int main(){

    int n;  // konsa pattern kis number ke liye bnana hai ya fir kitni rows chahiye
    cin >> n;

    int i = 1; // variable to check konsi row chal rhi hai

    while (i<=n)  // while loop jo pehli row se nth row tk jaayega
    {
        // ith row mei kitne stars chahiye
        // for this pattern, hamei utne stars print krne hai jitni n ki value hai

        int j = 1; // variable to check columns

        while(j<=n)     // loop to print stars in a row
        {
            cout << "*";
            j = j+1; // incrementing to print n number of stars in a row
        }
        cout << endl;  // we need to \n(enter) to continue the loop for another row

        i = i+1;        // incrementing for next row
    }

}
