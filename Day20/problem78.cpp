#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the order of the matrix: ";
    cin >> n;

    int a[n][n];

    cout << "Enter the elements of the matrix:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    bool symmetric = true;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] != a[j][i]) {
                symmetric = false;
                break;
            }
        }
    }

    if(symmetric)
        cout << "The matrix is symmetric." << endl;
    else
        cout << "The matrix is not symmetric." << endl;

    return 0;
}