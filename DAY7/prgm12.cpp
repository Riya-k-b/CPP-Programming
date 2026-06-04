#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    // Push elements
    cout << "Adding elements: 10, 20, 30" << endl;
    q.push(10);
    q.push(20);
    q.push(30);

    // Size
    cout << "Queue size: " << q.size() << endl;

    // Front and Back
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;

    // Pop one element
    cout << "Removing front element: " << q.front() << endl;
    q.pop();

    // Front after pop
    cout << "New front element: " << q.front() << endl;

    // Size after pop
    cout << "Current size: " << q.size() << endl;

    // Empty check
    cout << "Is queue empty? ";
    if (q.empty())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    // Remove all elements
    cout << "\nRemoving all elements:" << endl;
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl;

    // Empty check again
    cout << "Is queue empty now? ";
    if (q.empty())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}