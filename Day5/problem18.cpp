#include<iostream>
using namespace std;

int main() {
    int n, temp, digit, sum = 0;

    cout << "Enter the number: ";
    cin >> n;

    temp = n;

    while(temp > 0) {
        digit = temp % 10;

        // factorial of digit
        int fact = 1;
        for(int i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if(sum == n) {
        cout << n << " is a Strong Number";
    } else {
        cout << n << " is not a Strong Number";
    }

    return 0;
}