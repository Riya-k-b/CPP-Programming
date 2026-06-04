#include<iostream>
using namespace std;
class Rectangle
{
    public:
    double length, width;
    double area()   {return length * width; }
    double perimeter() {return 2 * (length + width) ; }
};
int main() 
{
    Rectangle rect;
    cout << "Enter length: "; cin >> rect.length;
    cout << "Enter width: "; cin >> rect.width;
    cout << "AREA: " << rect.area() << endl;
    cout << "PERIMETER: " << rect.perimeter() << endl;
}