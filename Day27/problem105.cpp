#include <iostream>
using namespace std;

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    Student s[100];
    int n = 0, choice;

    do
    {
        cout << "\n===== Student Record Management =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Roll No: ";
                cin >> s[n].roll;

                cout << "Enter Name: ";
                cin >> s[n].name;

                cout << "Enter Marks: ";
                cin >> s[n].marks;

                n++;
                cout << "Student Added Successfully!\n";
                break;

            case 2:
                cout << "\nStudent Records\n";
                for(int i=0;i<n;i++)
                {
                    cout << "\nRoll No : " << s[i].roll;
                    cout << "\nName    : " << s[i].name;
                    cout << "\nMarks   : " << s[i].marks << endl;
                }
                break;

            case 3:
            {
                int roll, found=0;
                cout << "Enter Roll No to Search: ";
                cin >> roll;

                for(int i=0;i<n;i++)
                {
                    if(s[i].roll==roll)
                    {
                        cout << "\nStudent Found\n";
                        cout << "Name : " << s[i].name << endl;
                        cout << "Marks: " << s[i].marks << endl;
                        found=1;
                    }
                }

                if(found==0)
                    cout << "Student Not Found\n";

                break;
            }

            case 4:
                cout << "Program Ended";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while(choice!=4);

    return 0;
}