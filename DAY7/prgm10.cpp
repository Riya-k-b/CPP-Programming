#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> myList = {10, 20, 30, 40, 50};
    
    // Add elements
    myList.push_front(5);    // O(1) — advantage over vector
    myList.push_back(60);    // O(1)
    
    cout << "List: ";
    for (int x : myList) cout << x << " ";
    cout << endl;
    
    // Remove elements
    myList.pop_front();      // O(1)
    myList.pop_back();       // O(1)
    
    cout << "After pop_front and pop_back: ";
    for (int x : myList) cout << x << " ";
    cout << endl;
    
    // Insert and erase (O(n) for traversal)
    auto it = myList.begin();
    advance(it, 2);          // Move iterator to position 2
    myList.insert(it, 75);   // Insert at position 2
    
    cout << "After insert at index 2: ";
    for (int x : myList) cout << x << " ";
    cout << endl;
    
    // Sort
    myList.sort();
    cout << "Sorted: ";
    for (int x : myList) cout << x << " ";
    cout << endl;
    
    return 0;
}