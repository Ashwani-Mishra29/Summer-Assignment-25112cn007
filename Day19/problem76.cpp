// write a program to find diagonal of sum
#include<iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;

    cout << "Enter the order of the square matrix: ";
    cin >> n;

    int a[n][n];

    cout << "Enter the elements of the matrix:\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        sum += a[i][i];
    }

    cout << "Sum of diagonal elements = " << sum;

    return 0;
}