#include <iostream>
using namespace std;

// Function to perform optimized Insertion Sort on an array
void Insertion_Sort(int arr[], int n)
{
    for (int i = 1; i < n; i++) // Start from the second element (index 1)
    {
        int key = arr[i]; // Store the current element to be placed correctly
        int j = i - 1;    // Start comparing from the previous element

        // Move elements of the sorted portion that are greater than `key` one step ahead
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j]; // Shift the element one position to the right
            j--;                 // Move to the previous element
        }

        // Place the `key` in its correct position in the sorted portion
        arr[j + 1] = key;
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

    Insertion_Sort(arr, n); // Sort the array using Insertion Sort

    cout << "Sorted Array: ";
    Print_array(arr, n); // Print the sorted array

    return 0; // End of program
}
