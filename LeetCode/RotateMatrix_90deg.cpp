#include <iostream>
#include <vector>
#include <algorithm> // for reverse()
using namespace std;

// Function to rotate the matrix 90 degrees clockwise
void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();

    // Step 1: Transpose the matrix (flip over the diagonal)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            // Swap elements at (i, j) and (j, i)
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step 2: Reverse each row
    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

// Helper function to print the matrix
void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

// Driver code to test the rotation
int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix:\n";
    printMatrix(matrix);

    rotate(matrix);  // Rotate 90° clockwise

    cout << "\nRotated Matrix:\n";
    printMatrix(matrix);

    return 0;
}
