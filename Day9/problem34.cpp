#include<iostream>
using namespace std;
int main(){
    int n,j,i;
    cout<<"Enter the number of rows:";
    cin>>n;
    for( i=n; i>=1; i--){
        for( j=1; j<=i; j++){
            cout<<j;

        }
        cout<<endl;
    }
    return 0;

}