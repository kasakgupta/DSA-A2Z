#include <iostream>
using namespace std;

// Function to check if a number is a palindrome
bool palindrome(int n) {
    int rev_num = 0; // Variable to store the reversed number
    int dup = n;     // Store the original number to compare later

    // Reverse the number
    while (n > 0) {
        int ld = n % 10;                 // Extract the last digit
        rev_num = (rev_num * 10) + ld;   // Add last digit to reversed number
        n = n / 10;                      // Remove the last digit
    }

    // Check if the reversed number is equal to the original number
    return rev_num == dup;
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    // Call the palindrome function and display result
    if (palindrome(n)) {
        cout << n << " is a palindrome." << endl;
    } else {
        cout << n << " is not a palindrome." << endl;
    }

    return 0;
}
