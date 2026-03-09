#include <iostream>
#include <string>
#include <cctype> // Required for tolower() and toupper()
using namespace std;

class CMSTool {
private:
    string text;

public:
    // Constructor to initialize the CMS with a string
    CMSTool(string input) {
        text = input;
    }

    // Function to count the number of words
    int countWords() {
        int count = 0;
        bool inWord = false;
        for (char c : text) {
            if (isspace(c)) {
                inWord = false;
            } else if (!inWord) {
                inWord = true;
                count++;
            }
        }
        return count;
    }

    // Function to convert string to Sentence Case
    void toSentenceCase() {
        if (text.empty()) return;
        
        // Capitalize first letter, lowercase the rest
        text[0] = toupper(text[0]);
        for (int i = 1; i < text.length(); i++) {
            text[i] = tolower(text[i]);
        }
        cout << "Sentence Case: " << text << endl;
    }

    void displayStats() {
        cout << "\n--- CMS String Statistics ---" << endl;
        cout << "Original Text: " << text << endl;
        cout << "Total Words: " << countWords() << endl;
        toSentenceCase();
    }
};

int main() {
    string user_input;
    cout << "Enter a sentence for the CMS Tool: ";
    getline(cin, user_input); // Use getline to include spaces

    // Create object using parameterized constructor
    CMSTool myCMS(user_input);
    myCMS.displayStats();

    return 0;
}
