#include<iostream>
using namespace std;
int main(){
    int n,m; 
    cout<<"Enter the number of elements in an array:"<<endl;
    cin>>n;
    cout<<"Enter the elements of array"<<endl;
    int arr[n];
    for(int i=0; i<=n-1; i++){
       cin>>arr[i];
      }
     

    int count=0;
    cout<<"Enter the desirable number from the array:";
    cin>>m;
    for(int i=0; i<=n-1; i++){
    if(m==arr[i]){
        count++;
    }
    }

    cout<<"The frequency of the desire number is"<<count;
    
    return 0;
}