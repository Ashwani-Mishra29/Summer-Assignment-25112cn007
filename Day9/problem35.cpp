#include<iostream>
using namespace std;
int main(){
    int n, i,j;
  

    cout<<"Enter the number of rows:";
    cin>>n;
    for(i=1; i<=n; i++ ){
          char ch='A';
        for(j=1; j<=i; j++){
            cout<<ch;
            ch++;

        }
        cout<<endl;
   }
   cout<<endl;

}