#include <iostream>
#include <vector>
using namespace std;

// Function to return elements of the matrix in spiral order
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int n = matrix.size();        // number of rows
    int m = matrix[0].size();     // number of columns

    int left = 0;                 // starting column
    int right = m - 1;            // ending column
    int top = 0;                  // starting row
    int bottom = n - 1;           // ending row

    vector<int> ans;              // to store the spiral order

    // Keep looping as long as the boundaries are valid
    while (top <= bottom && left <= right) {
        
        // Step 1: Traverse top row from left to right
        for (int i = left; i <= right; i++) {
            ans.push_back(matrix[top][i]);
        }
        top++;  // move top boundary down

        // Step 2: Traverse right column from top to bottom
        for (int i = top; i <= bottom; i++) {
            ans.push_back(matrix[i][right]);
        }
        right--;  // move right boundary left

        // Step 3: Traverse bottom row from right to left (if still valid)
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;  // move bottom boundary up
        }

        // Step 4: Traverse left column from bottom to top (if still valid)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++;  // move left boundary right
        }
    }

    return ans;
}

// Function to print the vector
void printVector(const vector<int>& vec) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

// Driver code to test the spiralOrder function
int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    cout << "Original Matrix:\n";
    for (auto row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    vector<int> result = spiralOrder(matrix);

    cout << "\nSpiral Order Traversal:\n";
    printVector(result);

    return 0;
}
