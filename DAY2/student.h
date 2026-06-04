#ifndef STUDENT_H   // Include guard — prevents multiple inclusions
#define STUDENT_H
#include <string>
using namespace std;

class Student {
    private:
        string name;
        int age;
        double cgpa;
    public:
        // Constructor declarations
        Student();
        Student(string n, int a, double c);
        
        // Method declarations
        void setName(string n);
        string getName();
        void displayInfo();
};
#endif
