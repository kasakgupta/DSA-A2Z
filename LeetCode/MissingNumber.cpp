#include <bits/stdc++.h>
using namespace std;

/*
    Missing Number Problem
    ----------------------
    Given an array of size n containing numbers from 0 to n (with one number missing),
    we need to find the missing number.

    Approach: Gauss Sum Formula
    ---------------------------
    - The sum of first n natural numbers (0 to n) is: n*(n+1)/2
    - If we calculate this "expected sum" and subtract the "actual sum" 
      of the array, the difference will be the missing number.

    Example:
        nums = [3, 0, 1]
        n = 3
        expectedSum = 3 * (3+1) / 2 = 6
        actualSum = 3 + 0 + 1 = 4
        missing = 6 - 4 = 2
*/

int missingNumber(vector<int>& nums) {
    int n = nums.size();

    // Step 1: Calculate expected sum using Gauss formula
    int expectedSum = n * (n + 1) / 2;

    // Step 2: Calculate actual sum of elements in nums
    int actualSum = 0;
    for (int num : nums) {
        actualSum += num;
    }

    // Step 3: Missing number = expectedSum - actualSum
    return expectedSum - actualSum;
}

// Driver code to test the function
int main() {
    vector<int> nums = {3, 0, 1};  // Example input

    cout << "Array elements: ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    int result = missingNumber(nums);

    cout << "The missing number is: " << result << endl;
    return 0;
}
