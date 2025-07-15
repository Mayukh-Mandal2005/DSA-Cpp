#include <iostream>
using namespace std;

bool isValid(string s){
    int vowel = 0, consonant = 0;
    if (s.length() >= 3)
    {
        for (char ch : s)
        {
            if (!isalnum(ch))
            {
                return false;
            }
            else if(isdigit(ch)) {
                // Ignore digits, do not count as vowel or consonant
                continue;
            }
            else if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                    ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
                vowel++;
            }
            else {
                consonant++;
            }

        }
    }

    if(vowel > 0 && consonant > 0) return true;
    return false;
}
int main()
{
    string s;
    cin >> s;

    cout << (isValid(s) ? "true" : "false") << endl;
}
