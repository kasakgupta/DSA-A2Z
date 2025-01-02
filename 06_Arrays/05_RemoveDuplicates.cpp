#include <iostream>
using namespace std;

// Function to remove duplicates from a sorted array
// Returns the count of unique elements in the array
int RemoveDuplicates(int arr[], int n)
{
    int i = 0; // Initialize pointer for the position of unique elements
    for (int j = 0; j < n; j++) // Traverse the array
    {
        if (arr[j] != arr[i]) // Check if the current element is different from the last unique element
        {
            arr[i + 1] = arr[j]; // Place the unique element at the next position
            i++; // Increment the unique elements pointer
        }
    }
    return i + 1; // Return the count of unique elements
}

int main()
{
    // Declare and initialize an array
    int arr[] = {1, 1, 2, 2, 2, 3, 3};          // Sample array (sorted)
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array (number of elements)

    // Call the function to remove duplicates and store the count of unique elements
    int UniqueEle = RemoveDuplicates(arr, n);

    // Print the number of unique elements
    cout << "The number of unique elements are: " << UniqueEle << endl;

    return 0; // End of the program
}

