#include <bits/stdc++.h>
using namespace std;

// Function to count number of primes less than n
vector<int> countPrimes(int n) {
    vector<int> ans;
    if (n <= 2) return {0}; // no primes less than 2

    // Step 1: Assume all numbers [0..n-1] are prime initially
    vector<bool> isPrime(n, true);

    // Step 2: 0 and 1 are not prime
    isPrime[0] = isPrime[1] = false;

    // Step 3: Start crossing out multiples
    for (int i = 2; i * i < n; i++) {
        if (isPrime[i]) { 
            // i is prime → cross out all multiples of i
            for (int j = i * i; j < n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // Step 4: Count all numbers still marked as prime
    
    for (int i = 2; i < n; i++) {
        if (isPrime[i]) ans.push_back(i);
    }
    return ans;
}

// ---------- Driver Code ----------
int main() {
    int n;

    cout << "Enter a number n: ";
    cin >> n;

    vector<int> result = countPrimes(n);

    cout << "Prime numbers less than " << n << " are: ";
    for (int prime : result) {
        cout << prime << " ";
    }
    cout << endl;

    cout << "Total count = " << result.size() << endl;

    return 0;
}
