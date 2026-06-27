#include <iostream>
using namespace std;

struct Employee
{
    int id;
    char name[50];
    float basicSalary;
    float bonus;
    float totalSalary;
};

int main()
{
    Employee emp[100];
    int n=0, choice;

    do
    {
        cout << "\n===== Salary Management System =====\n";
        cout << "1. Add Employee Salary\n";
        cout << "2. Display Salary Details\n";
        cout << "3. Search Employee Salary\n";
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

                cout << "Enter Basic Salary: ";
                cin >> emp[n].basicSalary;

                cout << "Enter Bonus: ";
                cin >> emp[n].bonus;

                emp[n].totalSalary = emp[n].basicSalary + emp[n].bonus;

                n++;

                cout << "Salary Record Added Successfully!\n";
                break;

            case 2:
                cout << "\nSalary Details\n";

                for(int i=0;i<n;i++)
                {
                    cout << "\nEmployee ID : " << emp[i].id;
                    cout << "\nName         : " << emp[i].name;
                    cout << "\nBasic Salary : " << emp[i].basicSalary;
                    cout << "\nBonus        : " << emp[i].bonus;
                    cout << "\nTotal Salary : " << emp[i].totalSalary << endl;
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
                        cout << "Name         : " << emp[i].name << endl;
                        cout << "Basic Salary : " << emp[i].basicSalary << endl;
                        cout << "Bonus        : " << emp[i].bonus << endl;
                        cout << "Total Salary : " << emp[i].totalSalary << endl;
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