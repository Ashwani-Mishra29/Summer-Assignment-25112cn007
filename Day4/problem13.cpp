#include<iostream>
using namespace std;
int main(){
    int n, i, fib;
    fib=1;

   cout<<"Enter the number";
    cin>>n;
    cout<<"The fibonacci series is";

    for(i=1; i<=n; i++){
        fib=fib+i;
        cout<<fib<<endl;

    }
    return 0;


}