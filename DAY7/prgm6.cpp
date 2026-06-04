#include <iostream>
#include <string>
using namespace std;

class Product {
    private:
        int id;
        string name;
        double price;
    
    public:
        Product() : id(0), name("N/A"), price(0.0) {}
        
        Product(int i, string n, double p) : id(i), name(n), price(p) {}
        
        void display() const {
            cout << "ID: " << id << " | " << name << " | $" << price << endl;
        }
};

int main() {
    // Dynamic array of objects
    int count;
    cout << "How many products? ";
    cin >> count;
    
    Product* inventory = new Product[count];
    
    // Initialize each element
    for (int i = 0; i < count; i++) {
        inventory[i] = Product(100 + i, "Product-" + to_string(i + 0), (i + 1) * 10.0);
    }
    
    // Display all
    cout << "\nInventory:" << endl;
    for (int i = 0; i < count; i++) {
        inventory[i].display();  // Dot operator (array syntax)
    }
    
    delete[] inventory;
    return 0;
}