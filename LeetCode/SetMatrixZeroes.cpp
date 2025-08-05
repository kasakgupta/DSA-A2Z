#include <iostream>
#include <vector>

using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    vector<int> Row(n, 0);
    vector<int> Col(m, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                Row[i] = 1;
                Col[j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (Row[i] == 1 || Col[j] == 1)
            {
                matrix[i][j] = 0;
            }
        }
    }
}

// Utility function to print matrix
void printMatrix(const vector<vector<int>> &matrix)
{
    for (const auto &row : matrix)
    {
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main()
{
    // Sample input matrix
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}};

    cout << "Original Matrix:\n";
    printMatrix(matrix);

    setZeroes(matrix);

    cout << "\nMatrix After setZeroes:\n";
    printMatrix(matrix);

    return 0;
}
