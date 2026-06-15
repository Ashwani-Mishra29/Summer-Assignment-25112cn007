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

    int k = 0;  
    
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[k] = arr[i];
            k++;
        }
    }

  
    for(int i = k; i < n; i++) {
        arr[i] = 0;
    }

   
    cout << "Array after moving zeroes to end: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}