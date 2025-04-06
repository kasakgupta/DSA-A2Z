#include <iostream>
#include <vector>
using namespace std;

// Function to check if placing a queen at (row, col) is safe
bool isSafe(vector<string>& board, int row, int col, int n) {
    // Check vertical column (above current row)
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 'Q') return false;
    }

    // Check upper-left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'Q') return false;
    }

    // Check upper-right diagonal
    for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == 'Q') return false;
    }

    return true;
}

// Recursive backtracking function to try placing queens row by row
void nQueens(vector<string>& board, int row, int n, vector<vector<string>>& ans) {
    // Base case: all rows filled
    if (row == n) {
        ans.push_back(board); // Store the valid configuration
        return;
    }

    // Try placing queen in every column of the current row
    for (int col = 0; col < n; col++) {
        if (isSafe(board, row, col, n)) {
            board[row][col] = 'Q';             // Place queen
            nQueens(board, row + 1, n, ans);   // Recurse for next row
            board[row][col] = '.';             // Backtrack: remove queen
        }
    }
}

// Main function to return all solutions
vector<vector<string>> solveNQueens(int n) {
    vector<string> board(n, string(n, '.'));  // Initialize empty board
    vector<vector<string>> ans;               // To store all valid solutions

    nQueens(board, 0, n, ans);                // Start from row 0
    return ans;
}

// Driver code
int main() {
    int n;
    cout << "Enter the number of queens: ";
    cin >> n;

    vector<vector<string>> solutions = solveNQueens(n);

    cout << "Total Solutions: " << solutions.size() << "\n\n";

    for (int i = 0; i < solutions.size(); i++) {
        cout << "Solution " << i + 1 << ":\n";
        for (const string& row : solutions[i]) {
            cout << row << "\n";
        }
        cout << "\n";
    }

    return 0;
}
