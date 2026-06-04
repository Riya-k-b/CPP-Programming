#include <iostream>
#include <string>
using namespace std;

// Base class
class Animal {
    protected:
        string name;
        int age;
    
    public:
        Animal(string n, int a) : name(n), age(a) {}
        
        void eat() {
            cout << name << " is eating." << endl;
        }
        
        void sleep() {
            cout << name << " is sleeping." << endl;
        }
};

// Derived class
class Dog : public Animal {
    private:
        string breed;
    
    public:
        // Constructor calls base class constructor
        Dog(string n, int a, string b) : Animal(n, a), breed(b) {}
        
        void bark() {
            cout << name << " (the " << breed << ") is barking!" << endl;
        }
        
        void display() {
            cout << "Dog: " << name << ", Age: " << age << ", Breed: " << breed << endl;
        }
};

int main() {
    Dog myDog("Buddy", 3, "Golden Retriever");
    
    myDog.eat();      // Inherited from Animal
    myDog.sleep();    // Inherited from Animal
    myDog.bark();     // Own method
    myDog.display();
    
    return 0;
}