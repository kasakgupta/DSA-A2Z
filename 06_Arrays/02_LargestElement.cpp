#include <iostream> // Include input-output stream library
using namespace std;

// Function to find the largest element in an array
void FindLargest(int arr[], int n) {
    int Largest = arr[0]; // Initialize the largest element as the first element of the array
    // Loop through the array to compare elements
    for (int i = 0; i < n; i++) {
        if (arr[i] > Largest) { // Check if the current element is greater than the current largest
            Largest = arr[i]; // Update the largest element
        }
    }
    cout << Largest << endl; // Print the largest element
}

int main() {
    // Declare and initialize an array
    int arr[] = {2, 3, 7, 3, 9}; // Sample array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array (number of elements)

    // Call the function to find and print the largest element
    FindLargest(arr, n);

    return 0; // End of the program
}
