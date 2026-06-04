#include <iostream>
#include <cstring>
using namespace std;

class Person {
    private:
        char* name;
        int age;
    
    public:
        // Default constructor
        Person() {
            name = new char[1];
            name[0] = '\0';
            age = 0;
            cout << "Default constructor" << endl;
        }
        
        // Parameterized constructor
        Person(const char* n, int a) {
            name = new char[strlen(n) + 1];
            strcpy(name, n);
            age = a;
            cout << "Parameterized constructor: " << name << endl;
        }
        
        // Copy constructor
        Person(const Person& p) {
            name = new char[strlen(p.name) + 1];
            strcpy(name, p.name);
            age = p.age;
            cout << "Copy constructor: " << name << endl;
        }
        
        // Destructor
        ~Person() {
            cout << "Destructor: " << name << endl;
            delete[] name;
        }
        
        void display() {
            cout << name << " (" << age << " years old)" << endl;
        }
};

int main() {
    Person p1;                            // Default
    Person p2("Arjun", 20);               // Parameterized
    Person p3 = p2;                       // Copy
    
    cout << "\n--- Person details ---" << endl;
    p1.display();
    p2.display();
    p3.display();
    
    cout << "\n--- End of main ---" << endl;
    return 0;
}