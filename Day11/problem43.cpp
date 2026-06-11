#include<iostream>
using namespace std;
void prime(int n)
{
   if(n<=1){
    cout<<n<<"is not a prime number";
   }
for(int i=1; i<=n/2; i++)

{
    if(n%i==0){
        cout<<n<<"is not a prime number";
          return;
    }
   else  {
        cout<<n<<"is a prime number";

    }
}
      }
 int main(){
   prime(19);
  return 0;



 }