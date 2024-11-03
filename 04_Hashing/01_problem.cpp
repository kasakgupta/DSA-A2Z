#include <bits/stdc++.h>
using namespace std;

// Program to demonstrate hashing using precomputation and fetching

int main() {
    // Input: Number of elements in the array
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Store each element in the array
    }

    // Step 1: Precompute counts using a hash array
    int hash[13] = {0}; // Hash array initialized to 0; size chosen to cover the value range
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1; // Increment the count for each element in `arr`
    }

    // Step 2: Process queries to fetch precomputed counts
    int q;
    cout << "Enter the number of queries: ";
    cin >> q;

    cout << "Enter the numbers to fetch their counts:\n";
    while (q--) {
        int number;
        cin >> number;
        // Fetch the count from the hash array
        cout << "Count of " << number << " is: " << hash[number] << endl;
    }

    return 0;
}
