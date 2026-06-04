#include <iostream>
#include <string>
using namespace std;

class Person {
    protected:
        string name;
    
    public:
        Person(string n) : name(n) {
            cout << "Person created: " << name << endl;
        }
        virtual ~Person() {}
};

class Employee : virtual public Person {
    protected:
        int employeeId;
    
    public:
        Employee(string n, int id) : Person(n), employeeId(id) {
            cout << "Employee created: " << name << " (ID: " << id << ")" << endl;
        }
};

class Student : virtual public Person {
    protected:
        int studentId;
    
    public:
        Student(string n, int id) : Person(n), studentId(id) {
            cout << "Student created: " << name << " (ID: " << id << ")" << endl;
        }
};

// Intern inherits from both — only ONE Person instance due to virtual
class Intern : public Employee, public Student {
    private:
        string project;
    
    public:
        Intern(string n, int empId, int stuId, string proj) 
            : Person(n), Employee(n, empId), Student(n, stuId), project(proj) {
            cout << "Intern created: " << name << " on project " << project << endl;
        }
        
        void display() {
            cout << "\nIntern Details:" << endl;
            cout << "Name     : " << name << endl;        // No ambiguity!
            cout << "Emp ID   : " << employeeId << endl;
            cout << "Stud ID  : " << studentId << endl;
            cout << "Project  : " << project << endl;
        }
};

int main() {
    Intern intern("Arjun", 1001, 5001, "AI Research");
    intern.display();
    return 0;
}