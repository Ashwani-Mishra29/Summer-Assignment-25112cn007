#include <iostream>
using namespace std;

int main() {
    int n, originalNum, reversen = 0, remainder;

    cout << "Enter a number: ";
    cin >> n;

    originalNum = n;

    // Reverse the number
    while (n != 0) {
        remainder = n % 10;
        reversen = reversen * 10 + remainder;
        n /= 10;
    }

    // Check palindrome
    if (originalNum == reversen)
        cout << "The number is a Palindrome." << endl;
    else
        cout << "The number is NOT a Palindrome." << endl;

    return 0;
}
