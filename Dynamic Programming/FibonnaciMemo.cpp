#include <bits/stdc++.h>
using namespace std;

//Key idea: Recursion + cache (dp array). Without dp, it’s exponential. With dp, it’s O(n).
// Recursive function with memoization
int fibMemo(int n, vector<int>& dp) {
    // Base cases
    if (n == 0) return 0;  
    if (n == 1) return 1;

    // If already computed, return stored value
    if (dp[n] != -1) return dp[n];

    // Otherwise compute and store it
    dp[n] = fibMemo(n-1, dp) + fibMemo(n-2, dp);
    return dp[n];
}

int main() {
    int n = 10; // Example: find 10th Fibonacci number
    vector<int> dp(n+1, -1); // -1 means "not computed yet"

    cout << "Fibonacci using Memoization (Top-Down DP): " 
         << fibMemo(n, dp) << endl;
    return 0;
}
