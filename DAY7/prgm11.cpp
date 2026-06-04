#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    // Push elements
    cout << "Pushing elements: 10, 20, 30, 40, 50, 60" << endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);



    // Size
    cout << "Size of stack: " << s.size() << endl;

    // Top element
    cout << "Top element: " << s.top() << endl;

    // Pop one element
    cout << "Removing top element: " << s.top() << endl;
    s.pop();

    // New top after pop
    cout << "New top element: " << s.top() << endl;

    // Current size
    cout << "Current size: " << s.size() << endl;

    // Empty check
    cout << "Is stack empty? ";
    if (s.empty())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    // Remove all elements
    cout << "\nRemoving all elements:" << endl;
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    cout << endl;

    // Check empty again
    cout << "Is stack empty now? ";
    if (s.empty())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}