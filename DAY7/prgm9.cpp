#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declaration
    vector<int> vec1;                // Empty vector
    vector<int> vec2(5, 10);         // 5 elements, all = 10
    vector<int> vec3 = {1, 2, 3, 4, 5};  // Initializer list
    
    cout << "vec3: ";
    for (int x : vec3) cout << x << " ";
    cout << endl;
    
    // Common operations
    vec3.push_back(6);          // Add at end: O(1) amortized
    vec3.push_back(7);
    
    cout << "After push_back: ";
    for (int x : vec3) cout << x << " ";
    cout << endl;
    
    cout << "Size: " << vec3.size() << endl;
    cout << "Capacity: " << vec3.capacity() << endl;
    cout << "First: " << vec3.front() << endl;
    cout << "Last: " << vec3.back() << endl;
    
    vec3.pop_back();            // Remove last element
    cout << "After pop_back: ";
    for (int x : vec3) cout << x << " ";
    cout << endl;
    
    // Insert at position
    vec3.insert(vec3.begin() + 2, 99);  // Insert 99 at index 2
    cout << "After insert: ";
    for (int x : vec3) cout << x << " ";
    cout << endl;
    
    // Remove at position
    vec3.erase(vec3.begin() + 1);  // Remove element at index 1
    cout << "After erase: ";
    for (int x : vec3) cout << x << " ";
    cout << endl;
    
    // Clearing
    vec3.clear();
    cout << "After clear, size: " << vec3.size() << endl;
    
    return 0;
}
