#include <iostream>
using namespace std;

int main(){
    
    /*
    int a;
    cin >> a;

    if (a>0){
        cout << "A is positive." << endl;
    }

    else{
        if(a<0){
            cout << "A is negative." << endl;
        }
        else{
            cout << "A is zero." << endl;
        }
    }
    */



   /*
   int a,b;
   cin >> a >> b;  // this doesn't read space, \t and \n.
   cout << "Value of a and b is: " << a << "," << b << endl;
    */



    /*
   int c;
   c = cin.get();
   cout << c << endl;
    */



   int a;
   cout << "Enter number A: " << endl;
   cin >> a;

   if(a>0){
    cout << "A is positive." << endl;
   }
   else if(a<0){
    cout << "A is negative." << endl;
   }
   else{
    cout << "A is zero." << endl;
   }
}
