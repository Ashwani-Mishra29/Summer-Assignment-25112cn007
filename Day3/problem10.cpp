#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    cout << "Prime numbers between " << start << " and " << end << " are:\n";

    for (int i = start; i <= end; i++) {
        if (i < 2) continue;  // skip numbers less than 2

        bool isPrime = true;

        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << " ";
        }
    }

    return 0;
}
   

    
