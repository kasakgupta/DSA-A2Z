#include <bits/stdc++.h>
using namespace std;

void printDivisors(int n) {
    vector<int> divisors;

    // Loop from 1 to sqrt(n) to find divisors
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            divisors.push_back(i); // Store the divisor

            // If n/i is a different divisor, add it as well
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }

    // Sort divisors in ascending order
    sort(divisors.begin(), divisors.end());

    // Print all divisors
    for (int divisor : divisors) {
        cout << divisor << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Divisors of " << n << " are: ";
    printDivisors(n);

    return 0;
}
