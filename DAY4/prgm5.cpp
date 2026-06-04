#include <iostream>
using namespace std;

int main() {
    int x = 42;
    
    // Pointer declaration
    int* ptr;          // Declare a pointer to an integer
    
    // Address-of operator (&)
    ptr = &x;          // ptr now stores the address of x
    
    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value of ptr (address it holds): " << ptr << endl;
    
    // Dereference operator (*)
    cout << "Value at address ptr: " << *ptr << endl;
    
    // Modify value through pointer
    *ptr = 100;
    cout << "x after *ptr = 100: " << x << endl;
    
    // Null pointer
    int* nullPtr = nullptr;
    // cout << *nullPtr;  // CRASH! Dereferencing null pointer
    
    return 0;
}