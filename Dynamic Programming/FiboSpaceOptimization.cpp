#include <bits/stdc++.h>
using namespace std;

//Key idea: Only last 2 values matter → kill the array.
//Time: O(n), Space: O(1). This is the most efficient practical approach.
int fibSpaceOpt(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int prev2 = 0; // fib(0)
    int prev1 = 1; // fib(1)

    // Only keep last two values instead of whole array
    for (int i = 2; i <= n; i++) {
        int curr = prev1 + prev2;
        prev2 = prev1; // shift
        prev1 = curr;
    }

    return prev1;
}

int main() {
    int n = 10; // Example
    cout << "Fibonacci using Space Optimized DP: " 
         << fibSpaceOpt(n) << endl;
    return 0;
}
