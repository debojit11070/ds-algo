
#include <iostream>
#include <vector>

using namespace std;

//function to implement bubble sort
void bubbleSort(vector<int>& arr)
{
    int n = arr.size();
    //outer loop to control the number of passes
    for(int i = 0; i<n-1; i++){
        bool swapped = false;

        // inner loop for comparing adjacent elements
        for(int j =0; j<n-i-1; j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

void printArray(const vector<int>& arr)
{
    for (int num:arr){
        cout<<num<<" ";

    }
    cout<<endl;
}

int main()
{
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    cout << "Original array: ";
    printArray(arr);

    // Sort the array using Bubble Sort
    bubbleSort(arr);

    cout << "Sorted array: ";
    printArray(arr);

    return 0;

}

/*
Explanation:
Bubble Sort Algorithm:

The bubbleSort function takes a vector of integers and sorts it in ascending order using the Bubble Sort technique.
The outer loop controls the number of passes through the array.
The inner loop compares adjacent elements and swaps them if they are in the wrong order.
If no swaps occur during a pass, the array is already sorted, and the loop breaks early.
Print Function:

The printArray function prints the contents of the array.
Main Function:

Initializes an example array.
Calls the bubbleSort function to sort the array.
Prints both the original and sorted arrays.
*/
