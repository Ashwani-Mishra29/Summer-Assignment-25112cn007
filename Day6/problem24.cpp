#include<iostream>
using namespace std;
int main(){
    int n,i,x;
    cout<<"Enter the base number"<<endl;
    cin>>x;
    cout<<"Enter the exponent number"<<endl;
    cin>>n;
    int power;
    power=1;
    for(i=1; i<=n; i++){
        power=power*x;

    }

    cout<<"The result is"<<endl;

    cout<<power<<endl;
    return 0;


}