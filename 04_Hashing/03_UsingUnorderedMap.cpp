#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Input size of the array
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;

    // Declare an array of size n
    int arr[n];

    // Input array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Create an unordered_map to store frequency of each element
    // Note: unordered_map is preferred here over map because it provides an average O(1) 
    // time complexity for insertions and lookups, making it more efficient for this use case.
    unordered_map<int, int> mpp;

    // Populate the map with frequencies
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    // Print each element and its frequency
    cout << "Element frequencies:\n";
    for (auto it : mpp)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    // Query count
    cout << "Enter the number of queries: ";
    int q;
    cin >> q;

    // Process each query
    cout << "Enter the queries:\n";
    while (q--)
    {
        int num;
        cin >> num;

        // Output frequency of the queried number
        // If the number doesn't exist in the map, mpp[num] will return 0
        cout << "Frequency of " << num << " is: " << mpp[num] << endl;
    }

    return 0;
}
