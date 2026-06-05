#include<iostream>

#include<iostream>
using namespace std;

int main(){
    int n, i, sum = 0;

    cout << "Enter the number" << endl;
    cin >> n;

    for(i = 1; i < n; i++){
        if(n % i == 0){
            sum = sum + i;
        }
    }

    cout << "Sum of factors = " << sum << endl;

    if(sum == n){
        cout << "The number is perfect";
    }
    else{
        cout << "The number is not perfect";
    }

    return 0;
}
