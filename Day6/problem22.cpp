#include<iostream>
using namespace std;
int main(){
    int n,decimal,remainder,binary, place;
    binary=0;
    place=1;

    cout<<"Enter the decimal number"<<endl;
    cin>>n;
    while(n>0){
        remainder=n%2;
        binary=binary+remainder*place;
        place=place*10;
        n=n/2;
    }
        cout<<"The binary number is"<<endl;
        cout<<binary<<endl;
        return 0;

            


    }
