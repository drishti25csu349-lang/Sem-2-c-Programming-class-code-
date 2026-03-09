#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (isdigit(ch)) {
        cout << "The given symbol is a NUMBER." << endl;
    }
    else if (isalpha(ch)) {
        ch = tolower(ch);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            cout << "The given symbol is a VOWEL." << endl;
        } else {
            cout << "The given symbol is a CONSONANT." << endl;
        }
    }
    else {
        cout << "The given symbol is a SPECIAL CHARACTER." << endl;
    }

    return 0;
}
