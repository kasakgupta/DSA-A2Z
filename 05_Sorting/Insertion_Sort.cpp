#include <iostream>
using namespace std;

// Function to perform Insertion Sort on an array
void Insertion_Sort(int arr[], int n)
{
    // Outer loop iterates through each element starting from the first
    for (int i = 1; i < n; i++)
    {
        int j = i; // Set `j` to the current index
        // Inner loop moves the current element `arr[j]` to its correct position
        // in the sorted portion of the array
        while (j > 0 && arr[j - 1] > arr[j]) // Compare with the previous element
        {
            swap(arr[j - 1], arr[j]); // Swap if the previous element is larger
            j--; // Move one step backward
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

    // Sort the array using Insertion Sort
    Insertion_Sort(arr, n);

    cout << "Sorted Array: ";
    Print_array(arr, n); // Print the sorted array

    return 0; // End of program
}
