#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum;
    cout << "Enter the required sum: ";
    cin >> sum;

    bool found = false;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                cout << "Pair found: "
                     << arr[i] << " and " << arr[j] << endl;
                found = true;
            }
        }
    }

    if(!found) {
        cout << "No pair found.";
    }

    return 0;
}