#include "Student.h"
#include <iostream>
using namespace std;

// Constructor definitions
Student::Student() {
    name = "Unknown";
    age = 0;
    cgpa = 0.0;
}
Student::Student(string n, int a, double c) {
    name = n;
    age = a;
    cgpa = c;
}
// Method definitions
void Student::setName(string n) {
    name = n;
}

string Student::getName() {
    return name;
}

void Student::displayInfo() {
    cout << "Name: " << name << ", Age: " << age << ", CGPA: " << cgpa << endl;
}
