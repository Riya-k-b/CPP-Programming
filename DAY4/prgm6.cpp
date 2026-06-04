
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    
    int* ptr = arr;  // Array name acts as pointer to first element
    
    cout << "Array traversal using pointer:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << *ptr << " (address: " << ptr << ")" << endl;
        ptr++;  // Move to next element (advances by sizeof(int) bytes)
    }
    
    return 0;
}
