#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Function to find the union of two arrays using a brute force approach
void FindUnion(int arr1[], int arr2[], int n1, int n2)
{
    set<int> st; // A set to store unique elements from both arrays
   
    // Insert all elements of the first array into the set
    for (int i = 0; i < n1; i++)
    {
        st.insert(arr1[i]);
    }
    // Insert all elements of the second array into the set
    for (int i = 0; i < n2; i++)
    {
        st.insert(arr2[i]);
    }

    // Create an array to store the union of both arrays
    int Union[st.size()];
    int i = 0;

    // Copy elements from the set to the union array
    for (auto it : st)
    {
        Union[i++] = it;
    }

    // Print the union array
    cout << "The union of the two arrays is: ";
    for (int j = 0; j < st.size(); j++)
    {
        cout << Union[j] << " ";
    }
    cout << endl;
}

int main()
{
    // Declare two arrays
    int arr1[] = {1, 2, 2, 4};    // First array
    int arr2[] = {2, 3, 5};       // Second array

    // Calculate the size of each array
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    // Call the function to find the union of the two arrays
    FindUnion(arr1, arr2, n1, n2);

    return 0; // End of the program
}
