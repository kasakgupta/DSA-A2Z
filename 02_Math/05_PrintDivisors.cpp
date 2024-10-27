#include <iostream>
using namespace std;

// Function to print all divisors of a number
void printDivisors(int n) {
    for (int i = 1; i <= n; i++) {
        // Check if i divides n without a remainder
        if (n % i == 0) {
            cout << i << " "; // Print the divisor
        }
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n; // Input the number

    cout << "Divisors of " << n << " are: ";
    printDivisors(n); // Call the function to print divisors
    cout << endl;

    return 0;
}
