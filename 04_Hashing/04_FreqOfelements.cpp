#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum and minimum frequency elements
void Frequency(int arr[], int n) {
    unordered_map<int, int> freqMap; // Step 1: Create an unordered map to store frequencies

    // Step 2: Traverse the array and calculate the frequency of each element
    for (int i = 0; i < n; i++) {
        freqMap[arr[i]]++; // Increment the frequency of arr[i] in the map
    }

    int maxFreq = 0, minFreq = INT_MAX; // Initialize variables for max and min frequencies
    int maxEle = 0, minEle = 0; // Initialize variables for elements with max and min frequencies

    // Step 3: Traverse the map to find max and min frequency elements
    for (auto it : freqMap) {
        int count = it.second; // Get the frequency of the current element
        int element = it.first; // Get the current element

        // Check if this frequency is greater than the current max frequency
        if (count > maxFreq) {
            maxFreq = count; // Update max frequency
            maxEle = element; // Update the element with max frequency
        }

        // Check if this frequency is less than the current min frequency
        if (count < minFreq) {
            minFreq = count; // Update min frequency
            minEle = element; // Update the element with min frequency
        }
    }

    // Step 4: Print the results
    cout << "The highest frequency element is: " << maxEle << "\n";
    cout << "The lowest frequency element is: " << minEle << "\n";
}

int main() {
    int arr[] = {10, 5, 10, 15, 10, 5}; // Sample input array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    if (n == 0) {
        cout << "Array is empty.\n";
        return 0;
    }

    Frequency(arr, n); // Call the function to find max and min frequency elements
    return 0;
}
