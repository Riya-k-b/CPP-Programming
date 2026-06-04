#include <iostream>
#include <string>
using namespace std;

class Product {
    private:
        int id;
        string name;
        double price;
    
    public:
        Product() : id(0), name("None"), price(0.0) {}
        
        Product(int i, string n, double p) : id(i), name(n), price(p) {}
        
        void display() {
            cout << "ID: " << id << " | " << name << " | $" << price << endl;
        }
};

int main() {
    // Stack array — default constructor for each element
    Product inventory[3];
    
    cout << "Inventory (default initialized):" << endl;
    for (int i = 0; i < 3; i++)
        inventory[i].display();
    
    // Dynamic array — default constructor for each element
    Product* heapInventory = new Product[3];
    
    // Re-assign with custom values
    heapInventory[0] = Product(101, "Laptop", 999.99);
    heapInventory[1] = Product(102, "Mouse", 29.99);
    heapInventory[2] = Product(103, "Keyboard", 79.99);
    
    cout << "\nHeap Inventory (assigned):" << endl;
    for (int i = 0; i < 3; i++)
        heapInventory[i].display();
    
    delete[] heapInventory;
    return 0;
}