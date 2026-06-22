#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int words = 1;

    cout << "Enter a sentence: ";
    getline(cin, str);

    if (str.length() == 0) {
        words = 0;
    } else {
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == ' ') {
                words++;
            }
        }
    }

    cout << "Number of words = " << words;

    return 0;
}