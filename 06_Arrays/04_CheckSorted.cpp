#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            // Do nothing if the current element is greater than or equal to the previous one
        }
        else
        {
            return false; // Return false if the array is not sorted
        }
    }
    return true; // Return true if no unsorted pair is found
}

int main()
{
    // Declare and initialize an array
    int arr[] = {2, 3, 7, 3, 9};          // Sample array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array (number of elements)

    // Call the function and print the result
    if (isSorted(arr, n))
    {
        cout << "The array is sorted in non-decreasing order." << endl;
    }
    else
    {
        cout << "The array is not sorted." << endl;
    }

    return 0; // End of the program
}

