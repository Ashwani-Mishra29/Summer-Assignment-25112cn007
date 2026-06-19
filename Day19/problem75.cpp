//write a program to write transpos of a matrix
#include<iostream>
using namespace std;

int main()
{
    int r, c;

    cout << "Enter number of rows: ";
    cin >> r;

    cout << "Enter number of columns: ";
    cin >> c;

    int a[r][c];

    cout << "Enter the elements of the matrix:\n";
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "\nOriginal Matrix:\n";
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nTranspose Matrix:\n";
    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < r; j++)
        {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}