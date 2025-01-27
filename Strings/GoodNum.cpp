#include <iostream>
using namespace std;

// Modulo value (10^9 + 7) - commonly used prime number to prevent overflow
int MOD = 1e9 + 7;

// Function to calculate (base^exponent) % MOD using modular exponentiation
long long modularExponentiation(long long base, long long exponent) {
    long long result = 1; // Initialize result to 1, as multiplying by 1 doesn't change the result
    while (exponent > 0) { // Keep halving the exponent until it reaches 0
        if (exponent % 2 == 1) // If the exponent is odd
            result = (result * base) % MOD; // Multiply result by base and take modulo MOD
        base = (base * base) % MOD; // Square the base and take modulo MOD
        exponent /= 2; // Halve the exponent (integer division)
    }
    return result; // Return the computed result
}

// Main function to count the number of good digit strings of length n
int countGoodNumbers(long long n) {
    // Calculate how many even and odd positions there are in the string
    long long evenIndexedPositions = (n + 1) / 2; // ceil(n / 2): Even indexed positions (0, 2, 4, ...)
    long long oddIndexedPositions = n / 2; // floor(n / 2): Odd indexed positions (1, 3, 5, ...)

    // Compute the number of ways to fill the even indexed positions
    // There are 5 choices (0, 2, 4, 6, 8) for each even indexed position
    long long evenDigitChoices = modularExponentiation(5, evenIndexedPositions); // 5^evenIndexedPositions % MOD

    // Compute the number of ways to fill the odd indexed positions
    // There are 4 choices (2, 3, 5, 7) for each odd indexed position
    long long oddDigitChoices = modularExponentiation(4, oddIndexedPositions); // 4^oddIndexedPositions % MOD

    // Total number of good strings is the product of the two
    // The result is taken modulo MOD to avoid overflow and ensure the result is within bounds
    return (evenDigitChoices * oddDigitChoices) % MOD;
}

int main() {
    // Driver code
    long long n;
    cout << "Enter the length of the number string (n): ";
    cin >> n; // Input the length of the number string

    int result = countGoodNumbers(n); // Call the function to calculate good numbers
    cout << "Number of good numbers of length " << n << " is: " << result << endl;

    return 0;
}
