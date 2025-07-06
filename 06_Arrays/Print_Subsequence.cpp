#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Recursive function to print all subsequences of the array
void printSub(int ind, vector<int> &ds, int arr[], int n) {
    // Base case: if we've considered all elements
    if(ind == n) {
        // Print the current subsequence stored in ds
        for(auto it: ds) {
            cout << it << " ";
        }
        if(ds.size() == 0)
            cout << "{}"; // to show the empty subsequence
        cout << endl;
        return;
    }

    // --- INCLUDE STEP ---
    // Choose to take the current element into the subsequence
    ds.push_back(arr[ind]);
    printSub(ind + 1, ds, arr, n);

    // --- EXCLUDE STEP ---
    // Backtrack: remove the last element added
    ds.pop_back();

    // Choose not to take the current element into the subsequence
    printSub(ind + 1, ds, arr, n);
}

int main() {
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds; // Data structure to hold the current subsequence

    cout << "All possible subsequences:\n";
    printSub(0, ds, arr, n);
    return 0;
}
