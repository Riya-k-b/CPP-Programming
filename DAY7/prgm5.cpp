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
    Student s1;

    s1.name = "Pavan";
    s1.age = 25;

    // Object Pointer
    Student* ptr = &s1;

    cout << "Using Object:" << endl;
    cout << s1.name << " " << s1.age << endl;

    cout << "\nUsing Pointer:" << endl;
    cout << ptr->name << " " << ptr->age << endl;

    return 0;
}