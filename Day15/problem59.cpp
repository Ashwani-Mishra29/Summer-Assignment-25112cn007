#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in array";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array";
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];

    }
    int temp=arr[n-1];
    for(int i=n-1; i>=0; i--){
        arr[i]=arr[i-1];

    }
    arr[0]=temp;

    cout<<"The right rotate array is";
    for(int i=0; i<=n-1; i++){
        cout<<arr[i];

    }
    return 0;

}