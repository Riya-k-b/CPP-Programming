#include<iostream>
#include<string> 
using namespace std;
class Student {
    public:
           string name;
           int age;
           double cgpa;
        void displayInfo() {
            cout << "Name:" << name << endl;
            cout << "Age:" << age << endl;
            cout << "CGPA" << cgpa << endl;
        }
};
int main() {
    Student s1;
    s1.name = "Arjun";
    s1.age = 20;
    s1.cgpa = 8.75;
    s1.displayInfo();
    Student* s2 = new Student();
    s2->name = "Priya";
    s2->age = 21;
    s2->cgpa = 9.2;
    s2->displayInfo();
    delete s2;
    return 0;
}