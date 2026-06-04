
#include<iostream>
using namespace std;
int main(){
    int n, i, fib;
    fib=1;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(i=1; i<=n; i++){
      fib=fib+n;
      
    }
    cout<<"The value of fibonacci term is"<<endl;

      cout<<fib;

    
    return 0;

    

    
}