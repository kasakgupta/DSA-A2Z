#include <iostream>
using namespace std;

// Function to perform a left rotation of the array by one position
void LeftRotate(int arr[], int n)
{
    // Store the first element in a temporary variable
    int temp = arr[0];

    // Shift all elements of the array one position to the left
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }

    // Place the first element (stored in temp) at the last position
    arr[n - 1] = temp;

    // Print the rotated array
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};

    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the LeftRotate function to rotate the array
    LeftRotate(arr, n);

    return 0;
}
