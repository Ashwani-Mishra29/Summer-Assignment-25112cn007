#include<iostream>
using namespace std;
int main(){
     int n, originalNum, remainder;
    int result = 0;

    cout << "Enter a number: ";
    cin >> n;

    originalNum = n;

    while (n != 0) {
        remainder = n% 10;
        result += remainder * remainder * remainder;
        n /= 10;
    }

    if (result == originalNum)
        cout << originalNum << " is an Armstrong number.";
    else
        cout << originalNum << " is not an Armstrong number.";

    return 0;
}
