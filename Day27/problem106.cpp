#include <iostream>
using namespace std;

struct Employee
{
    int id;
    char name[50];
    char department[30];
};

int main()
{
    Employee emp[100];
    int n=0, choice;

    do
    {
        cout << "\n===== Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Employee ID: ";
                cin >> emp[n].id;

                cout << "Enter Name: ";
                cin >> emp[n].name;

                cout << "Enter Department: ";
                cin >> emp[n].department;

                n++;
                cout << "Employee Added Successfully!\n";
                break;

            case 2:
                cout << "\nEmployee List\n";

                for(int i=0;i<n;i++)
                {
                    cout << "\nEmployee ID : " << emp[i].id;
                    cout << "\nName        : " << emp[i].name;
                    cout << "\nDepartment  : " << emp[i].department << endl;
                }
                break;

            case 3:
            {
                int id, found=0;

                cout << "Enter Employee ID: ";
                cin >> id;

                for(int i=0;i<n;i++)
                {
                    if(emp[i].id==id)
                    {
                        cout << "\nEmployee Found\n";
                        cout << "Name       : " << emp[i].name << endl;
                        cout << "Department : " << emp[i].department << endl;
                        found=1;
                    }
                }

                if(found==0)
                    cout << "Employee Not Found\n";

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