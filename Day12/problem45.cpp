#include<iostream>
using namespace std;


int palindrome(int n)
{
    int reverse=0;
int original=n;
    while(n>0){
        int digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;

    }
    
        return reverse==original;
    }
   
int main(){
    int n;
cout<<"Enter the number";
cin>>n;

   
int result=palindrome(n);
if(result){
    cout<<n<<"is a palindrome number";

}
else{
    cout<<n<<"is not a palindrome number";

}
   
return 0;

}