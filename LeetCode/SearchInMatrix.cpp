#include <bits/stdc++.h>
using namespace std;

// Function to search target in a sorted 2D matrix
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int n = matrix.size();         // number of rows
    int m = matrix[0].size();      // number of columns

    int low = 0, high = (n * m) - 1;   // treating matrix as a 1D array
    while (low <= high) {
        int mid = (low + high) / 2;   // mid index in 1D view

        // Convert 1D index to 2D (row, col)
        int row = mid / m;    // row number
        int col = mid % m;    // column number

        // Check the middle element
        if (matrix[row][col] == target)
            return true;               // found target
        else if (matrix[row][col] < target)
            low = mid + 1;             // move to right half
        else
            high = mid - 1;            // move to left half
    }

    return false; // if not found
}

// ---------------- DRIVER CODE ----------------
int main() {
    // Example matrix
    vector<vector<int>> matrix = {
        {1,  3,  5,  7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int target = 16;

    // Call the function
    if (searchMatrix(matrix, target))
        cout << target << " found in the matrix!" << endl;
    else
        cout << target << " not found in the matrix!" << endl;

    // Try another number
    target = 13;
    if (searchMatrix(matrix, target))
        cout << target << " found in the matrix!" << endl;
    else
        cout << target << " not found in the matrix!" << endl;

    return 0;
}
