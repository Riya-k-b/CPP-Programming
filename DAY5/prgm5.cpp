#include <iostream>
#include <string>
using namespace std;

// Base class
class Employee {
    protected:
        int id;
        string name;
        double baseSalary;
    
    public:
        Employee(int i, string n, double s) 
            : id(i), name(n), baseSalary(s) {}
        
        virtual double calculateSalary() {
            return baseSalary;
        }
        
        void display() {
            cout << "ID: " << id << ", Name: " << name;
            cout << ", Salary: $" << calculateSalary() << endl;
        }
        
        virtual ~Employee() {}
};

// Derived class 1
class Manager : public Employee {
    private:
        double bonus;
    
    public:
        Manager(int i, string n, double s, double b) 
            : Employee(i, n, s), bonus(b) {}
        
        double calculateSalary() override {
            return baseSalary + bonus;
        }
};

// Derived class 2
class Intern : public Employee {
    private:
        int stipend;
    
    public:
        Intern(int i, string n, double s, int st) 
            : Employee(i, n, s), stipend(st) {}
        
        double calculateSalary() override {
            return stipend;  // Interns get fixed stipend
        }
};

int main() {
    Employee* employees[3];
    
    employees[0] = new Employee(101, "Arjun", 50000);
    employees[1] = new Manager(102, "Priya", 80000, 15000);
    employees[2] = new Intern(103, "Rahul", 0, 15000);
    
    for (int i = 0; i < 3; i++) {
        employees[i]->display();
    }
    
    for (int i = 0; i < 3; i++) {
        delete employees[i];
    }
    
    return 0;
}