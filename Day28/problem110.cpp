#include<iostream>
#include<string>
using namespace std;

struct Account
{
    int accNo;
    string name;
    float balance;
};

Account a[100];
int total=0;

void createAccount()
{
    cout<<"Enter Account Number: ";
    cin>>a[total].accNo;
    cin.ignore();

    cout<<"Enter Name: ";
    getline(cin,a[total].name);

    cout<<"Enter Initial Balance: ";
    cin>>a[total].balance;

    total++;

    cout<<"Account Created Successfully.\n";
}

void deposit()
{
    int no;
    float amt;

    cout<<"Enter Account Number: ";
    cin>>no;

    for(int i=0;i<total;i++)
    {
        if(a[i].accNo==no)
        {
            cout<<"Enter Amount: ";
            cin>>amt;

            a[i].balance+=amt;

            cout<<"Deposit Successful.\n";
            return;
        }
    }

    cout<<"Account Not Found.\n";
}

void withdraw()
{
    int no;
    float amt;

    cout<<"Enter Account Number: ";
    cin>>no;

    for(int i=0;i<total;i++)
    {
        if(a[i].accNo==no)
        {
            cout<<"Enter Amount: ";
            cin>>amt;

            if(amt<=a[i].balance)
            {
                a[i].balance-=amt;
                cout<<"Withdrawal Successful.\n";
            }
            else
                cout<<"Insufficient Balance.\n";

            return;
        }
    }

    cout<<"Account Not Found.\n";
}

void display()
{
    for(int i=0;i<total;i++)
    {
        cout<<"\nAccount Number: "<<a[i].accNo;
        cout<<"\nName: "<<a[i].name;
        cout<<"\nBalance: "<<a[i].balance;
        cout<<"\n---------------------";
    }
}

int main()
{
    int choice;

    do
    {
        cout<<"\n1.Create Account";
        cout<<"\n2.Deposit";
        cout<<"\n3.Withdraw";
        cout<<"\n4.Display";
        cout<<"\n5.Exit";

        cout<<"\nEnter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:createAccount();break;
            case 2:deposit();break;
            case 3:withdraw();break;
            case 4:display();break;
            case 5:cout<<"Thank You\n";break;
            default:cout<<"Invalid Choice";
        }

    }while(choice!=5);

    return 0;
}