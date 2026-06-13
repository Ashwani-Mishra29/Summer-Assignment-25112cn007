#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"Enter the number of elements in an array";
    cin>>n;
   int  arr[n];
   cout<<"The numbers in array is";
   for(int i=0; i<=n-1; i++){
    cin>>arr[i];

   }
   cout<<"The value of sum of an array is ";
   for (int i=0; i<=n-1; i++)
   sum=sum+arr[i];
   cout<<sum;



}