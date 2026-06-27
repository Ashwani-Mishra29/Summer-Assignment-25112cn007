#include <iostream>
using namespace std;

struct Student
{
    int roll;
    char name[50];
    float m1, m2, m3, m4, m5;
    float total, percentage;
    char grade;
};

int main()
{
    Student s;

    cout << "===== Marksheet Generation System =====\n";

    cout << "Enter Roll Number: ";
    cin >> s.roll;

    cout << "Enter Student Name: ";
    cin >> s.name;

    cout << "Enter Marks of Subject 1: ";
    cin >> s.m1;

    cout << "Enter Marks of Subject 2: ";
    cin >> s.m2;

    cout << "Enter Marks of Subject 3: ";
    cin >> s.m3;

    cout << "Enter Marks of Subject 4: ";
    cin >> s.m4;

    cout << "Enter Marks of Subject 5: ";
    cin >> s.m5;

    // Calculate Total and Percentage
    s.total = s.m1 + s.m2 + s.m3 + s.m4 + s.m5;
    s.percentage = s.total / 5;

    // Calculate Grade
    if(s.percentage >= 90)
        s.grade = 'A';
    else if(s.percentage >= 75)
        s.grade = 'B';
    else if(s.percentage >= 60)
        s.grade = 'C';
    else if(s.percentage >= 40)
        s.grade = 'D';
    else
        s.grade = 'F';

    // Display Marksheet
    cout << "\n========== MARKSHEET ==========\n";
    cout << "Roll Number : " << s.roll << endl;
    cout << "Name        : " << s.name << endl;

    cout << "\nMarks\n";
    cout << "Subject 1 : " << s.m1 << endl;
    cout << "Subject 2 : " << s.m2 << endl;
    cout << "Subject 3 : " << s.m3 << endl;
    cout << "Subject 4 : " << s.m4 << endl;
    cout << "Subject 5 : " << s.m5 << endl;

    cout << "\nTotal Marks : " << s.total << "/500" << endl;
    cout << "Percentage  : " << s.percentage << "%" << endl;
    cout << "Grade       : " << s.grade << endl;

    if(s.percentage >= 40)
        cout << "Result      : PASS" << endl;
    else
        cout << "Result      : FAIL" << endl;

    return 0;
}