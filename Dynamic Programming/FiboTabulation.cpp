#include <bits/stdc++.h>
using namespace std;

//Key idea: Build from small problems → bigger problems. No recursion, just a loop. Still O(n) time + O(n) space.
int fibTab(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    // dp[i] will store the i-th Fibonacci number
    vector<int> dp(n+1);
    dp[0] = 0; 
    dp[1] = 1;

    // Fill the table iteratively
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
}

int main() {
    int n = 10; // Example
    cout << "Fibonacci using Tabulation (Bottom-Up DP): " 
         << fibTab(n) << endl;
    return 0;
}
