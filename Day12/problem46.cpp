#include<iostream>
#include<math.h>

using namespace std;
int armstrong(int n)
{
    int original=n;
    int x=0;
    while(n>0){
       int  count=n/10;
       n=n/10;

       count++;
       int digit=n%10;
       x=x+pow(digit, count);
    }
    if(x=original){
        return 1;

    }
    else return 0;

}
int main(){
    int n;
int x;

    cout<<"Enter the number";
    cin>>n;
    if(x=n){
        cout<<n<<"is a armstrong number";

    }
    else
{
    cout<<n<<"is not a armstrong number";

}
return 0;

}