#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"The elements of array is:"<<endl;
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    cout<<"The reverse of array is:"<<endl;
    for(int i=0; i<=n-1; i++){
        arr[i]=arr[n-1-i];
    cout<<arr[n-1-i]<<endl;
    }
return 0;
}