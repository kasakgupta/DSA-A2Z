#include <iostream>
using namespace std;

// Function to perform Bubble Sort on an array
void Bubble_Sort(int arr[], int n)
{
    // Outer loop determines the end of the unsorted portion
    for (int i = n - 1; i >= 1; i--)
    {
        // Inner loop goes up to the unsorted portion only
        for (int j = 0; j < i; j++) 
        {
            // If the current element is greater than the next, swap them
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]); // Built-in swap function
            }
        }
    }
}

// Function to print the elements of an array
void Print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // Print each element of the array
    }
    cout << endl; // Move to the next line after printing the array
}

int main()
{
    int n = 5;                        // Number of elements in the array
    int arr[] = {13, 46, 24, 52, 20}; // Initialize the array

    cout << "Original Array: ";
    Print_array(arr, n); // Print the original array

    Bubble_Sort(arr, n); // Sort the array using Bubble Sort

    cout << "Sorted Array: ";
    Print_array(arr, n); // Print the sorted array

    return 0;
}
