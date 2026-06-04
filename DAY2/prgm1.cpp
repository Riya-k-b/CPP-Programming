#include <iostream>
#include <string>
using namespace std;
class Engine 
{
    public: 
         int horsepower;
         string fuelType;
         void start() {
            cout << horsepower << " HP " << fuelType << " engine started!" << endl;
         }
};
class car
{
    public: 
         string brand;
         string model;
         Engine engine;
         void display()
         {
            cout << brand << " " << model << " width-" ;
            cout << engine.horsepower << " HP engine." << endl;
         }
};
int main()
{
    car mycar;
    mycar.brand = "Toyota";
    mycar.model = "Camry";
    mycar.engine.horsepower = 203;
    mycar.engine.fuelType = "Petrol";
    mycar.display();
    mycar.engine.start();
    return 0;
}
