#include<iostream>
#include<string>
using namespace std;

struct Ticket
{
    int seatNo;
    string name;
    bool booked;
};

Ticket t[50];

void initialize()
{
    for(int i=0;i<50;i++)
    {
        t[i].seatNo=i+1;
        t[i].booked=false;
    }
}

void bookTicket()
{
    int seat;
    cout<<"Enter Seat Number (1-50): ";
    cin>>seat;

    if(seat<1 || seat>50)
    {
        cout<<"Invalid Seat.\n";
        return;
    }

    if(t[seat-1].booked)
    {
        cout<<"Seat Already Booked.\n";
        return;
    }

    cin.ignore();

    cout<<"Enter Passenger Name: ";
    getline(cin,t[seat-1].name);

    t[seat-1].booked=true;

    cout<<"Ticket Booked Successfully.\n";
}

void cancelTicket()
{
    int seat;

    cout<<"Enter Seat Number: ";
    cin>>seat;

    if(t[seat-1].booked)
    {
        t[seat-1].booked=false;
        t[seat-1].name="";
        cout<<"Ticket Cancelled.\n";
    }
    else
        cout<<"Seat Not Booked.\n";
}

void display()
{
    cout<<"\nBooked Tickets\n";

    for(int i=0;i<50;i++)
    {
        if(t[i].booked)
        {
            cout<<"Seat "<<t[i].seatNo
                <<" -> "<<t[i].name<<endl;
        }
    }
}

int main()
{
    initialize();

    int choice;

    do
    {
        cout<<"\n1.Book Ticket";
        cout<<"\n2.Cancel Ticket";
        cout<<"\n3.View Bookings";
        cout<<"\n4.Exit";

        cout<<"\nEnter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:bookTicket();break;
            case 2:cancelTicket();break;
            case 3:display();break;
            case 4:cout<<"Thank You";break;
            default:cout<<"Invalid Choice";
        }

    }while(choice!=4);

    return 0;
}