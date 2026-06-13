#include<iostream>
using namespace std;
int main(){
    int n;
   
    cout<<"Enter the number of elements of array";
    cin>>n;
     int arr[n];
    cout<<"Enter"<< n<<"elements";
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];

    }
    cout<<"The array of elements is";
    for(int i=0; i<=n-1; i++){
        cout<<arr[i]<< " " ;
        

    }
    return 0;



}