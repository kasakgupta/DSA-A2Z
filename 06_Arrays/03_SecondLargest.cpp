#include <iostream> 
using namespace std;

// Function to find the largest and second largest elements in an array
void SecondLargest(int arr[], int n)
{
    // Initialize the largest element as the first element and second largest as -1
    int Largest = arr[0], SecondLargest = -1;

    // Loop through the array starting from the second element
    for (int i = 1; i < n; i++)
    {
        // If the current element is greater than the largest
        if (arr[i] > Largest)
        {
            SecondLargest = Largest; // Update second largest
            Largest = arr[i];        // Update largest
        }
        // If the current element is not the largest but greater than the second largest
        else if (arr[i] < Largest && arr[i] > SecondLargest)
        {
            SecondLargest = arr[i]; // Update second largest
        }
    }

    // Output the largest and second largest elements
    cout << "Largest element is " << Largest << endl;
    cout << "Second Largest element is " << SecondLargest << endl;
}

int main()
{
    // Declare and initialize an array
    int arr[] = {2, 3, 7, 3, 9};          // Sample array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array (number of elements)

    // Call the function to find and print the largest and second largest elements
    SecondLargest(arr, n);

    return 0; // End of the program
}
