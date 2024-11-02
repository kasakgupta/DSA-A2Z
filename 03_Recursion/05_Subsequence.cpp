#include <bits/stdc++.h>
using namespace std;

// A subsequence of an array is a sequence derived from the array by deleting some or no elements, 
// without changing the order of the remaining elements. For example, for the array {3, 1, 2}, 
// the subsequences include {}, {3}, {1}, {2}, {3, 1}, {3, 2}, {1, 2}, {3, 1, 2}.

// Function to recursively print all subsequences of the array
void printF(int ind, vector<int> &ds, int arr[], int n) {
    // Base case: if we have reached the end of the array
    if (ind == n) {
        // Print the current subsequence stored in ds
        for (auto it : ds) {
            cout << it << " ";
        }
        cout << endl; // New line for each subsequence
        return;
    }

    // "Pick" condition: Include arr[ind] in the current subsequence
    ds.push_back(arr[ind]); // Add current element to the subsequence
    printF(ind + 1, ds, arr, n); // Move to the next element with the current element included
    ds.pop_back(); // Backtrack: remove the current element before the next call

    // "Not Pick" condition: Exclude arr[ind] from the current subsequence
    printF(ind + 1, ds, arr, n); // Move to the next element without including the current element
}

int main() {
    int arr[] = {3, 1, 2}; // Sample array
    int n = 3; // Size of the array
    vector<int> ds; // Vector to store the current subsequence
    printF(0, ds, arr, n); // Start the recursion from index 0

    return 0;
}
