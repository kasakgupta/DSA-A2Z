#include <bits/stdc++.h>
using namespace std;

/*
    Function to reverse an array using recursion
    - The function `Rev_arr` swaps elements from both ends of the array, moving towards the middle.
    - It takes the current index `i` and swaps `arr[i]` with `arr[n - i - 1]`.
    - The base case is reached when `i` is greater than or equal to `n / 2`, meaning all elements have been swapped.
*/

void Rev_arr(int i, int arr[], int n) {
    // Base case: Stop recursion when `i` reaches or exceeds the midpoint of the array
    if (i >= n / 2)
        return;

    // Swap the elements at the current index `i` with the corresponding element from the end
    swap(arr[i], arr[n - i - 1]);

    // Recursive call to move towards the next pair
    Rev_arr(i + 1, arr, n);
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call the function to reverse the array
    Rev_arr(0, arr, n);

    // Display the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
