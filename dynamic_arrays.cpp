#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // Dynamically allocate an array
    int* arr = new int[size];

    // Assign values to the array elements
    for (int i = 0; i < size; ++i) {
        arr[i] = i + 1;
    }

    // Print the array elements
    cout << "Elements of the array are: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deallocate the memory
    delete[] arr;

    return 0;
}
