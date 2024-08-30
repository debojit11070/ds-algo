#include <iostream>
using namespace std;

// Merge two sorted subarrays
void merge(int array[], int left, int mid, int right) {
    int subArrayOne = mid - left + 1;
    int subArrayTwo = right - mid;

    // Create temporary arrays
    int* leftArray = new int[subArrayOne];
    int* rightArray = new int[subArrayTwo];

    // Copy data to temporary arrays
    for (int i = 0; i < subArrayOne; ++i)
        leftArray[i] = array[left + i];
    for (int j = 0; j < subArrayTwo; ++j)
        rightArray[j] = array[mid + 1 + j];

    // Merge the two arrays
    int i = 0, j = 0, k = left;
    while (i < subArrayOne && j < subArrayTwo) {
        if (leftArray[i] <= rightArray[j]) {
            array[k] = leftArray[i];
            ++i;
        } else {
            array[k] = rightArray[j];
            ++j;
        }
        ++k;
    }

    // Copy remaining elements
    while (i < subArrayOne) {
        array[k] = leftArray[i];
        ++i;
        ++k;
    }
    while (j < subArrayTwo) {
        array[k] = rightArray[j];
        ++j;
        ++k;
    }

    // Clean up
    delete[] leftArray;
    delete[] rightArray;
}

// Recursive Merge Sort
void mergeSort(int array[], int left, int right) {
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    mergeSort(array, left, mid);
    mergeSort(array, mid + 1, right);
    merge(array, left, mid, right);
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
