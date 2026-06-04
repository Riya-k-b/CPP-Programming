#include <iostream>
#include <string>
#include <vector>
#include <limits>
using namespace std;

class Employee {
    private:
        int id;
        string name;
        double salary;
        string department;
    
    public:
        // Constructor (initializer list with safe defaults, then validate)
        Employee(int i, const string& n, double s, const string& d)
            : id(i), name("Unknown"), salary(0.0), department(d)
        {
            // Use setters to validate/override defaults
            setName(n);
            setSalary(s);
        }
        
        // Getters
        int getId() const { return id; }
        string getName() const { return name; }
        double getSalary() const { return salary; }
        string getDepartment() const { return department; }
        
        // Setters with validation
        void setName(const string& n) {
            if (n.length() >= 2) {
                name = n;
            } else {
                cout << "Name must be at least 2 characters!" << endl;
                name = "Unknown";
            }
        }
        
        void setSalary(double s) {
            if (s >= 0) {
                salary = s;
            } else {
                cout << "Salary cannot be negative!" << endl;
                salary = 0;
            }
        }
        
        void setDepartment(const string& d) {
            department = d;
        }
        
        // Business logic using private data
        void giveRaise(double percentage) {
            if (percentage > 0) {
                salary += salary * (percentage / 100);
                cout << name << " received a " << percentage 
                     << "% raise. New salary: $" << salary << endl;
            }
        }
        
        void display() const {
            cout << "ID: " << id << " | " << name 
                 << " | $" << salary << " | " << department << endl;
        }
};

int main() {
    vector<Employee> employees;

    cout << "Enter employee records. Use id = 0 to finish." << endl;
    while (true) {
        cout << "\nEnter id (0 to finish): ";
        int id;
        if (!(cin >> id)) {
            // bad input, clear and exit input loop
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;
        }
        if (id == 0) break;

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // consume newline

        cout << "Name: ";
        string name;
        getline(cin, name);

        cout << "Salary: ";
        double salary;
        if (!(cin >> salary)) {
            cin.clear();
            salary = 0.0;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Department: ";
        string dept;
        getline(cin, dept);

        employees.emplace_back(id, name, salary, dept);
    }

    cout << "\nEmployees entered:\n";
    for (const auto& e : employees) e.display();

    // Demonstrate business logic on the first employee if present
    if (!employees.empty()) {
        cout << "\nApplying a 10% raise to first employee and attempting invalid salary set:\n";
        employees[0].giveRaise(10);
        employees[0].setSalary(-100); // will trigger validation
        cout << "\nFinal details of first employee:\n";
        cout << "Name: " << employees[0].getName() << endl;
        cout << "Salary: $" << employees[0].getSalary() << endl;
    }

    return 0;
}