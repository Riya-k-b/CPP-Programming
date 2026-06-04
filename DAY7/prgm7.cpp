#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;
};

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student* students = new Student[n];

    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter Name: ";
        cin >> students[i].name;

        cout << "Enter Age: ";
        cin >> students[i].age;
    }

    cout << "\nStudent Information\n";

    for(int i = 0; i < n; i++)
    {
        cout << students[i].name
             << " "
             << students[i].age
             << endl;
    }

    delete[] students;

    return 0;
}