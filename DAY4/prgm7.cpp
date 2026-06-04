#include <iostream>
using namespace std;

class Calculator {
    private:
        int result;
    
    public:
        Calculator() : result(0) {}
        
        Calculator& add(int x) {
            result += x;
            return *this;  // Return reference to current object
        }
        
        Calculator& subtract(int x) {
            result -= x;
            return *this;
        }
        
        Calculator& multiply(int x) {
            result *= x;
            return *this;
        }
        
        void display() {
            cout << "Result: " << result << endl;
        }
};

int main() {
    Calculator calc;
    
    // Method chaining — each method returns *this
    calc.add(10).subtract(3).multiply(4);
    calc.display();  // (10 - 3) * 4 = 28
    
    return 0;
}