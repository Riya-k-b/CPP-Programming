#include <iostream>
using namespace std;

// Base class
class Animal {
    protected:
        int age;
    
    public:
        Animal() : age(0) {
            cout << "Animal constructor" << endl;
        }
};

// Without virtual inheritance — each has its own Animal
class LandAnimal : virtual public Animal {
    public:
        LandAnimal() { cout << "LandAnimal constructor" << endl; }
};

class WaterAnimal : virtual public Animal {
    public:
        WaterAnimal() { cout << "WaterAnimal constructor" << endl; }
};

// With virtual inheritance — only ONE Animal instance
class Amphibian : public LandAnimal, public WaterAnimal {
    public:
        Amphibian() { cout << "Amphibian constructor" << endl; }
        
        void setAge(int a) { age = a; }     // No ambiguity! Only one 'age'
        int getAge() { return age; }
};

int main() {
    Amphibian frog;
    frog.setAge(5);
    cout << "Age: " << frog.getAge() << endl;
    
    cout << "\nNote: Animal constructor called only ONCE!" << endl;
    return 0;
}