#include <iostream>
using namespace std;

// Function to check if the k-th bit is set (1) in number n
bool checkKthBit(int n, int k) {
    // Bitwise AND operation with (1 << k)
    // If the k-th bit is set, the result will be non-zero
    // Otherwise, the result will be zero
    return (n & (1 << k)) != 0;
}

// Driver code to test the function
int main() {
    int n, k;
    cout << "Enter a number (n): ";
    cin >> n;
    cout << "Enter bit position (k): ";
    cin >> k;

    // Call the function and print the result
    if (checkKthBit(n, k))
        cout << "The " << k << "-th bit of " << n << " is set (1)." << endl;
    else
        cout << "The " << k << "-th bit of " << n << " is not set (0)." << endl;

    return 0;
}
