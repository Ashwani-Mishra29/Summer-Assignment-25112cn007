#include<iostream>
#include<string>
using namespace std;

struct Contact
{
    string name;
    string phone;
};

Contact c[100];
int total=0;

void addContact()
{
    cin.ignore();

    cout<<"Enter Name: ";
    getline(cin,c[total].name);

    cout<<"Enter Phone Number: ";
    getline(cin,c[total].phone);

    total++;

    cout<<"Contact Added Successfully.\n";
}

void searchContact()
{
    cin.ignore();

    string name;
    cout<<"Enter Name: ";
    getline(cin,name);

    for(int i=0;i<total;i++)
    {
        if(c[i].name==name)
        {
            cout<<"Phone Number: "<<c[i].phone<<endl;
            return;
        }
    }

    cout<<"Contact Not Found.\n";
}

void display()
{
    if(total==0)
    {
        cout<<"No Contacts Available.\n";
        return;
    }

    for(int i=0;i<total;i++)
    {
        cout<<"\nName: "<<c[i].name;
        cout<<"\nPhone: "<<c[i].phone;
        cout<<"\n----------------";
    }
}

void deleteContact()
{
    cin.ignore();

    string name;
    cout<<"Enter Name: ";
    getline(cin,name);

    for(int i=0;i<total;i++)
    {
        if(c[i].name==name)
        {
            for(int j=i;j<total-1;j++)
                c[j]=c[j+1];

            total--;

            cout<<"Contact Deleted Successfully.\n";
            return;
        }
    }

    cout<<"Contact Not Found.\n";
}

int main()
{
    int choice;

    do
    {
        cout<<"\n1.Add Contact";
        cout<<"\n2.Search Contact";
        cout<<"\n3.Display Contacts";
        cout<<"\n4.Delete Contact";
        cout<<"\n5.Exit";

        cout<<"\nEnter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:addContact();break;
            case 2:searchContact();break;
            case 3:display();break;
            case 4:deleteContact();break;
            case 5:cout<<"Thank You\n";break;
            default:cout<<"Invalid Choice";
        }

    }while(choice!=5);

    return 0;
}