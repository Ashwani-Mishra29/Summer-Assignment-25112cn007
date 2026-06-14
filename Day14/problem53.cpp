#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the number of elements in the Array"<<endl;
    cin>>n;
    cout<<"Enter the elements of array"<<endl;
    int arr[n];
    for(int i=0; i<=n-1; i++){  
    cin>>arr[i];
    }
    cout<<"Enter the key element"<<endl;
    cin>>m;
    for(int i=0; i<=n-1; i++){
    if(arr[i]==m){
        cout<<m<<"is in the array";
        return 0;
    }
}
for(int i=0; i<=n-1; i++){
   if(arr[i]!=m){
    cout<<m<<"is not in the array";
   }
}
   return 0;
   }