#include <iostream>
using namespace std;

int main(){

    
    char ch;
    cout << "Enter a character: " << endl;
    cin >> ch;

    /*
    if(ch >='a' && ch <= 'z'){
        cout << "Lowercase" << endl;
    }
    else if(ch >= 'A' && ch <= 'Z' ){
        cout << "Uppercase" << endl;
    }
    else if(ch >= '0' && ch <= '9'){
        cout << "Numeric" << endl;
    }
    else{
        cout << "Invalid character" << endl;
    }
    */

   int asc = ch;
   if(asc>=97 && asc<=122){
    cout << "Lowercase" << endl;
   }
   else if(asc>=65 && asc<=90){
    cout << "Uppercase" << endl;
   }
   else if(asc>=48 && asc<=57){
    cout << "Numeric" << endl;
   }
   else{
    cout << "Invalid Character" << endl;
   }

}