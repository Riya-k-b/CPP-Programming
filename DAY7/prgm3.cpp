#include<iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter array size: ";
    cin >> size;
    int* arr = new int[size];
    for(int i = 0; i < size; i++)
    {
        arr[i] = (i + 1)*(i + 1);
    }
    cout <<"\nSquares of array are: \n";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
    delete[] arr;
    arr = nullptr;
    return 0;
}