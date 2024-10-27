#include <iostream>
using namespace std;

// Function to count the number of digits in an integer
int countDigits(int n) {
    int count = 0; // Initialize count to zero
    
    // Loop until n becomes zero
    while (n > 0) {
        int lastDigit = n % 10; // Extract the last digit (optional, but shows process)
        count = count + 1; // Increment count for each digit
        n = n / 10; // Remove the last digit by dividing n by 10
    }
    return count; // Return the total count of digits
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n; // Input number from the user
    
    int digitCount = countDigits(n); // Call the function to count digits
    cout << "The number of digits is: " << digitCount << endl; // Output the result
    
    return 0;
}
