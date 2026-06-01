#include<iostream>
using namespace std;
int main(){
    int n, i;
    int table;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(i=1; i<=10; i++){
        table=n*i;
        cout<<table<<endl;
    }
    return 0;
}