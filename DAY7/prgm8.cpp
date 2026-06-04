#include <iostream>
#include <string>
using namespace std;

// Template function — works with ANY type
template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

// Template with multiple type parameters
template <typename T, typename U>
auto add(T a, U b) -> decltype(a + b) {
    return a + b;
}

int main() {
    // Compiler deduces type from arguments
    cout << "Max of 10 and 20: " << getMax(10, 20) << endl;           // int
    cout << "Max of 3.14 and 2.71: " << getMax(3.14, 2.71) << endl;  // double
    cout << "Max of 'a' and 'z': " << getMax('a', 'z') << endl;      // char
    
    // Explicit type specification
    cout << "Max (explicit double): " << getMax<double>(5, 7.5) << endl;
    
    // Multiple type parameters
    cout << "Add int + double: " << add(10, 3.5) << endl;
    cout << "Add int + string: " << add(to_string(42), to_string(100)) << endl;
    
    return 0;
}