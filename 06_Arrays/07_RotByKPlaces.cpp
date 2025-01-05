#include <bits/stdc++.h>
using namespace std;

//Rotate array by k places

vector<int> rotateArray(vector<int> arr, int n, int k) {
    // Handle cases where k is greater than n
    k = k % n;

    // Store the first k elements in a temporary array
    vector<int> temp(k);
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

    // Shift the remaining elements to the left
    for (int i = k; i < n; i++) {
        arr[i - k] = arr[i];
    }

    // Place the stored k elements at the end
    for (int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }

    return arr;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int n = arr.size(); // Get the size of the vector
    int k = 3; // Number of rotations

    // Call the rotateArray function
    vector<int> result = rotateArray(arr, n, k);

    // Print the rotated array
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
