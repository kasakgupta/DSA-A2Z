#include <bits/stdc++.h>
using namespace std;

// Function to rotate the array by d places (Optimized for space complexity)
void rotateArray(int arr[], int n, int d) {
    // Step 1: Reverse the first d elements
    reverse(arr, arr + d);

    // Step 2: Reverse the remaining elements
    reverse(arr + d, arr + n);

    // Step 3: Reverse the entire array
    reverse(arr, arr + n);
}

int main() {
    int n;

    // Input size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    // Input elements of the array
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int d;

    // Input the number of places to rotate
    cout << "Enter the number of positions to rotate the array: ";
    cin >> d;

    // Handle cases where d > n
    d = d % n;

    // Call the rotateArray function
    rotateArray(arr, n, d);

    // Output the rotated array
    cout << "The rotated array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
