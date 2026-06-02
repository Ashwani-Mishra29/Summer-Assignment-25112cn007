#include<iostream>
using namespace std;
int main()
{
    int n, reversen, remainder;
    cout<<"Enter the number";
    cin>>n;
    reversen=0;

    while(n!=0)
    {
        remainder=n%10;
        reversen=reversen*10+remainder;
        n=n/10;


    }
    cout<<"The reverse of the number is";
    cout<<reversen;
    
    return 0;

}