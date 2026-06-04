#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>  // For accumulate
using namespace std;

int main() {
    vector<int> vec = {40, 10, 30, 20, 50};
    
    // 1. sort()
    vector<int> sorted = vec;
    sort(sorted.begin(), sorted.end());
    cout << "Sorted: ";
    for (int x : sorted) cout << x << " ";
    cout << endl;
    
    // Sort in descending order
    sort(sorted.begin(), sorted.end(), greater<int>());
    cout << "Descending: ";
    for (int x : sorted) cout << x << " ";
    cout << endl;
    
    // 2. find() — returns iterator to element (or end() if not found)
    auto it = find(vec.begin(), vec.end(), 90);
    if (it != vec.end()) {
        cout << "Found 30 at position: " << (it - vec.begin()) << endl;
    } else {
        cout << "30 not found" << endl;
    }
    
    // 3. count() — counts occurrences
    vector<int> data = {1, 2, 2, 3, 2, 4, 2, 5};
    int twos = count(data.begin(), data.end(), 2);
    cout << "Number of 2s: " << twos << endl;
    
    // 4. binary_search() — requires sorted range
    if (binary_search(sorted.begin(), sorted.end(), 30)) {
        cout << "30 exists in sorted array" << endl;
    }
    
    // 5. accumulate() — sum of elements
    int sum = accumulate(vec.begin(), vec.end(), 0);
    cout << "Sum of elements: " << sum << endl;
    
    // 6. min_element() / max_element()
    auto minIt = min_element(vec.begin(), vec.end());
    auto maxIt = max_element(vec.begin(), vec.end());
    cout << "Min: " << *minIt << ", Max: " << *maxIt << endl;
    
    // 7. reverse()
    vector<int> rev = vec;
    reverse(rev.begin(), rev.end());
    cout << "Reversed: ";
    for (int x : rev) cout << x << " ";
    cout << endl;
    
    return 0;
}