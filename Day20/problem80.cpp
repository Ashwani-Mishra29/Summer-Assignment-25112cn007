#include <iostream>
using namespace std;

int main() {
    int r, c;

    cout << "Enter number of rows: ";
    cin >> r;

    cout << "Enter number of columns: ";
    cin >> c;

    int a[r][c];

    cout << "Enter the elements of the matrix:" << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    cout << "\nColumn-wise Sum:" << endl;

    for(int j = 0; j < c; j++) {
        int sum = 0;

        for(int i = 0; i < r; i++) {
            sum += a[i][j];
        }

        cout << "Sum of Column " << j + 1 << " = " << sum << endl;
    }

    return 0;
}