#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements in array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of array:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Step 1: store first element
    int temp = arr[0];

    // Step 2: shift elements left
    for(int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Step 3: put first element at last
    arr[n - 1] = temp;

    // Step 4: print result
    cout << "The left rotated array is:" << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}