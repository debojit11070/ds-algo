#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Example array
    vector<int> array = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = array.size();

    int best = 0;  // Maximum sum of a contiguous subarray found so far
    int sum = 0;   // Current sum of the subarray

    for (int k = 0; k < n; k++) {
        sum = max(array[k], sum + array[k]);  // Update the current sum
        best = max(best, sum);                // Update the best maximum sum found
    }

    cout << "Maximum sum of a contiguous subarray is: " << best << "\n";
    return 0;
}
