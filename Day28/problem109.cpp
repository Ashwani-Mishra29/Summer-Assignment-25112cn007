#include<iostream>
#include<string>
using namespace std;

struct Book
{
    int id;
    string title;
    string author;
    bool issued;
};

Book b[100];
int countBook = 0;

void addBook()
{
    cout<<"Enter Book ID: ";
    cin>>b[countBook].id;
    cin.ignore();

    cout<<"Enter Book Title: ";
    getline(cin,b[countBook].title);

    cout<<"Enter Author Name: ";
    getline(cin,b[countBook].author);

    b[countBook].issued=false;
    countBook++;

    cout<<"Book Added Successfully!\n";
}

void displayBooks()
{
    if(countBook==0)
    {
        cout<<"No Books Available.\n";
        return;
    }

    cout<<"\nLibrary Books\n";
    for(int i=0;i<countBook;i++)
    {
        cout<<"ID: "<<b[i].id
            <<"\nTitle: "<<b[i].title
            <<"\nAuthor: "<<b[i].author
            <<"\nStatus: "<<(b[i].issued?"Issued":"Available")
            <<"\n-----------------\n";
    }
}

void searchBook()
{
    int id;
    cout<<"Enter Book ID: ";
    cin>>id;

    for(int i=0;i<countBook;i++)
    {
        if(b[i].id==id)
        {
            cout<<"Book Found\n";
            cout<<"Title: "<<b[i].title<<endl;
            cout<<"Author: "<<b[i].author<<endl;
            return;
        }
    }
    cout<<"Book Not Found.\n";
}

void issueBook()
{
    int id;
    cout<<"Enter Book ID: ";
    cin>>id;

    for(int i=0;i<countBook;i++)
    {
        if(b[i].id==id)
        {
            if(!b[i].issued)
            {
                b[i].issued=true;
                cout<<"Book Issued Successfully.\n";
            }
            else
                cout<<"Book Already Issued.\n";
            return;
        }
    }
    cout<<"Book Not Found.\n";
}

void returnBook()
{
    int id;
    cout<<"Enter Book ID: ";
    cin>>id;

    for(int i=0;i<countBook;i++)
    {
        if(b[i].id==id)
        {
            if(b[i].issued)
            {
                b[i].issued=false;
                cout<<"Book Returned Successfully.\n";
            }
            else
                cout<<"Book Already Available.\n";
            return;
        }
    }
    cout<<"Book Not Found.\n";
}

int main()
{
    int choice;

    do
    {
        cout<<"\n1.Add Book";
        cout<<"\n2.Display Books";
        cout<<"\n3.Search Book";
        cout<<"\n4.Issue Book";
        cout<<"\n5.Return Book";
        cout<<"\n6.Exit";
        cout<<"\nEnter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:addBook();break;
            case 2:displayBooks();break;
            case 3:searchBook();break;
            case 4:issueBook();break;
            case 5:returnBook();break;
            case 6:cout<<"Thank You!\n";break;
            default:cout<<"Invalid Choice\n";
        }

    }while(choice!=6);

    return 0;
}