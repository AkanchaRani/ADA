#include <iostream>
#include <string>
using namespace std;

int main() {
    string paragraph, word;

    cout << "Enter the paragraph: ";
    getline(cin, paragraph);

    cout << "Enter the string to search: ";
    getline(cin, word);

    int count = 0;

    for (int i = 0; i <= paragraph.length() - word.length(); i++) {
        int j;

        // Compare characters one by one
        for (j = 0; j < word.length(); j++) {
            if (paragraph[i + j] != word[j]) {
                break;
            }
        }

        // If all characters matched
        if (j == word.length()) {
            count++;
              
        }
    }

    cout << "Frequency of \"" << word << "\" = " << count << endl;

    return 0;
}




