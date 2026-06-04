#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums = {10, 20, 30, 40, 50};

    // begin()
    cout << "begin(): ";
    auto it1 = nums.begin();
    cout << *it1 << endl;

    // end()
    cout << "end() traversal: ";
    for(auto it = nums.begin(); it != nums.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // cbegin()
    cout << "cbegin(): ";
    auto it2 = nums.cbegin();
    cout << *it2 << endl;

    // cend()
    cout << "cend() traversal: ";
    for(auto it = nums.cbegin(); it != nums.cend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // rbegin()
    cout << "rbegin() traversal: ";
    for(auto it = nums.rbegin(); it != nums.rend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // rend()
    cout << "rend() demonstrated above." << endl;

    // crbegin()
    cout << "crbegin() traversal: ";
    for(auto it = nums.crbegin(); it != nums.crend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // crend()
    cout << "crend() demonstrated above." << endl;

    return 0;
}
