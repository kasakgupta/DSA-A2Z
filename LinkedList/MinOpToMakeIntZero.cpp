#include <bits/stdc++.h>
using namespace std;

/*
Problem summary (short):
  - Start with num1.
  - In one operation you pick i in [0,60] and do: num1 -= (2^i + num2).
  - After k operations with indices i1..ik:
      num1 = (2^i1 + 2^i2 + ... + 2^ik) + k * num2
    So we need: S = num1 - k * num2  where S is sum of k powers of two.
  - Question: minimum k (>=1) such that S >= 0 and S can be written as sum of exactly k powers of two.
    This is equivalent to: popcount(S) <= k <= S  (because min terms = popcount, max terms = S (1+1+...))

Key facts / intuition:
  - popcount(S) = minimum number of powers of two needed to represent S (from binary).
  - We can always "split" a power of two into smaller powers (e.g., 4 = 2+2 = 1+1+2), so if popcount(S) <= k <= S,
    we can reach exactly k terms.
  - We try k from 1 to 60. Checking k up to 60 is sufficient for this problem (practical bound given constraints i ∈ [0,60]).
  - For safety of multiplication/subtraction, compute S in 64-bit.
  - Complexity: O(60) per query → effectively constant time.

Implementation details:
  - We use __builtin_popcountll to get popcount of a 64-bit S.
  - We check S >= 0, popcount(S) <= k, and k <= S. If satisfied, k is the answer.
*/

int makeTheIntegerZero(int num1, int num2) {
    // Try all k from 1 to 60 (inclusive).
    // If a valid k exists, the minimum one will be found in this loop.
    for (int k = 1; k <= 60; ++k) {
        // Use 64-bit to avoid overflow in the arithmetic.
        long long S = (long long)num1 - 1LL * k * num2;

        // 1) S must be non-negative because it's a sum of powers of two.
        if (S < 0) continue;

        // 2) Count how many 1-bits S has — that's the minimum number of powers-of-two needed.
        int bits = __builtin_popcountll(S);

        // 3) Check the two necessary and sufficient conditions:
        //    - bits <= k  : we can form S using at least 'bits' powers; allowing splitting gives us more terms up to S.
        //    - k <= S     : we cannot use more terms than S (since smallest power is 1), so k can't exceed S.
        //
        // If both hold, we can represent S as sum of exactly k powers of two.
        if (bits <= k && k <= S) {
            return k; // minimum valid k (we check k in increasing order)
        }
    }

    // no valid k found
    return -1;
}

int main() {
    // Demonstration using the problem examples
    cout << "Example 1: num1 = 3, num2 = -2  -> expected 3\n";
    cout << "Output: " << makeTheIntegerZero(3, -2) << "\n\n";

    cout << "Example 2: num1 = 5, num2 = 7   -> expected -1\n";
    cout << "Output: " << makeTheIntegerZero(5, 7) << "\n\n";

    // If you want to test custom inputs manually, uncomment the block below
    /*
    int a, b;
    cout << "Enter num1 and num2 (space separated): ";
    while (cin >> a >> b) {
        cout << "Answer: " << makeTheIntegerZero(a, b) << "\n";
        cout << "Enter next pair or Ctrl+D to exit: ";
    }
    */

    return 0;
}
