#include <iostream>
using namespace std;

// Function to perform Selection Sort
void Selection_Sort(int arr[], int n)
{
    // Outer loop to traverse the array
    for (int i = 0; i <= n - 2; i++)
    {
        int mini = i;  // Assume the current element is the minimum
        
        // Inner loop to find the minimum element in the remaining unsorted portion of the array
        for (int j = i + 1; j <= n - 1; j++)  // Start from i+1 to avoid comparing the same element
        {
            if (arr[j] < arr[mini])  // If a smaller element is found
                mini = j;  // Update the index of the minimum element
        }
        
        // Swap the minimum element with the element at position i
        int temp = arr[mini];  
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

// Function to print the array
void Print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";  // Print each element of the array
    }
    cout << endl;  
}

int main()
{
    int n = 5;  // Number of elements in the array
    int arr[] = {13, 46, 24, 52, 20};  // Initialize the array

    Print_array(arr, n);  // Print the array before sorting

    Selection_Sort(arr, n);  // Sort the array using Selection Sort

    cout << "After Sorting " << endl;  
    Print_array(arr, n);  

    return 0;  
}
