#include <iostream>
using namespace std;

// A prime number has exactly two factors: 1 and the number itself

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int cnt = 0; // Counter to keep track of the number of factors

    // Loop to find divisors up to the square root of n
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) { // If i divides n with no remainder, it's a factor
            cnt++; // Count i as a factor
            
            // If n/i is a different factor, count it as well
            if (n / i != i) {
                cnt++;
            }
        }
    }

    // A prime number has exactly two factors
    if (cnt == 2) {
        cout << "true"; // n is prime
    } else {
        cout << "false"; // n is not prime
    }

    return 0;
}
