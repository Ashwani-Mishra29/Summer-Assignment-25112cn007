#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0];

    // Find largest element
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    int second = -1;

    // Find second largest element
    for(int i = 0; i < n; i++) {
        if(arr[i] != max && arr[i] > second) {
            second = arr[i];
        }
    }

    cout << "Largest element = " << max << endl;
    cout << "Second largest element = " << second;

    return 0;
}