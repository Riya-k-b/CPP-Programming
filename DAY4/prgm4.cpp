#include <iostream>
#include <string>
using namespace std;

// Abstract class (cannot be instantiated)
class Shape {
    protected:
        string color;
    
    public:
        Shape(string c) : color(c) {}
        
        // Pure virtual function — must be overridden by derived classes
        virtual double area() const = 0;
        
        // Pure virtual function
        virtual void draw() const = 0;
        
        // Concrete method — shared by all derived classes
        string getColor() const { return color; }
        
        // Virtual destructor — needed for proper cleanup
        virtual ~Shape() {}
};

// Concrete derived class
class Circle : public Shape {
    private:
        double radius;
    
    public:
        Circle(string c, double r) : Shape(c), radius(r) {}
        
        double area() const override {
            return 3.14159 * radius * radius;
        }
        
        void draw() const override {
            cout << "Drawing a " << color << " circle (area: " << area() << ")" << endl;
        }
};

class Rectangle : public Shape {
    private:
        double length;
        double width;
    
    public:
        Rectangle(string c, double l, double w) : Shape(c), length(l), width(w) {}
        
        double area() const override {
            return length * width;
        }
        
        void draw() const override {
            cout << "Drawing a " << color << " rectangle (area: " << area() << ")" << endl;
        }
};

int main() {
    // Shape s("red");  // ERROR! Cannot instantiate abstract class
    
    Shape* shapes[2];
    shapes[0] = new Circle("Red", 5.0);
    shapes[1] = new Rectangle("Blue", 4.0, 6.0);
    
    for (int i = 0; i < 2; i++) {
        shapes[i]->draw();
    }
    
    // Cleanup
    for (int i = 0; i < 2; i++) {
        delete shapes[i];
    }
    
    return 0;
}