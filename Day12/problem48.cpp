#include<iostream>
using namespace std;

void perfectNumber(int n)
{
    int sum = 0;

    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == n)
    {
        cout << n << " is a Perfect Number";
    }
    else
    {
        cout << n << " is not a Perfect Number";
    }
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    perfectNumber(n);

    return 0;
}