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

    cout << "\nRow-wise Sum:" << endl;

    for(int i = 0; i < r; i++) {
        int sum = 0;

        for(int j = 0; j < c; j++) {
            sum += a[i][j];
        }

        cout << "Sum of Row " << i + 1 << " = " << sum << endl;
    }

    return 0;
}