#include <iostream>
#include <string>
using namespace std;

class Student {
    public:
        string name;
        int age;
        Student(string n, int a) : name(n), age(a) {}
        
        void display() {
            cout << name << " (" << age << " years old)" << endl;
        }
};

int main() {
    // Object on heap
    Student* s1 = new Student("Arjun", 20);
    
    // Access members via arrow operator
    cout << "Name: " << s1->name << endl;     // Equivalent to (*s1).name
    cout << "Age: " << s1->age << endl;         // Equivalent to (*s1).age
    s1->display();                               // Equivalent to (*s1).display()
    
    // Alternative: dereference first, then use dot
    (*s1).display();
    
    return 0;
}