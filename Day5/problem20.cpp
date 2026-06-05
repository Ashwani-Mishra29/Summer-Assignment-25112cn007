#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int largest = 1;

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {   // check factor
            int count = 0;

            for(int j = 1; j <= i; j++) {
                if(i % j == 0) {
                    count++;
                }
            }

            if(count == 2) {   // prime check
                largest = i;
            }
        }
    }

    cout << "Largest Prime Factor = " << largest;

    return 0;
}