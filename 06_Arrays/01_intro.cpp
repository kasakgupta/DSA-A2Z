#include <iostream> // Include input-output stream library
using namespace std;

// Global array declaration: Can hold up to 10^7 elements
int arr[10000000]; 

int main() {
    // Declare a local array that can hold up to 10^6 elements
    int n = 1000000; // Set the size of the array
    int arr1[n]; // Local array declaration with 'n' elements

    // Initializing the global array with default values (optional but recommended for clarity)
    for (int i = 0; i < 10000000; i++) {
        arr[i] = 0; // Initialize global array elements to 0
    }

    // Initializing the local array with default values (optional)
    for (int i = 0; i < n; i++) {
        arr1[i] = i; // Assign index values to the local array for demonstration
    }

    // Looping through the local array and printing its values
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " "; // Print each element followed by a space
    }

    cout << endl; // Print a newline at the end for cleaner output

    return 0; // End of the program
}
