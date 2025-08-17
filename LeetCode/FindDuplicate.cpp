#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) {
    // Phase 1: Detect cycle
    int slow = nums[0];
    int fast = nums[0];

    // Move slow (1 step) and fast (2 steps) until they meet
    do {
        slow = nums[slow];         // slow moves 1 step
        fast = nums[nums[fast]];   // fast moves 2 steps
    } while (fast != slow);

    // Phase 2: Find the entry point of the cycle (the duplicate number)
    fast = nums[0];   // reset fast to start
    while (fast != slow) {
        slow = nums[slow];   // move 1 step
        fast = nums[fast];   // move 1 step
    }

    return slow;  // or return fast (both are same here)
}

int main() {
    // Example input
    vector<int> nums = {1, 3, 4, 2, 2};

    // Call the function
    int duplicate = findDuplicate(nums);

    // Print result
    cout << "Duplicate number is: " << duplicate << endl;

    return 0;
}


/* 
=================== TEXTUAL DIAGRAM ===================

Array: nums = [1, 3, 4, 2, 2]

Think of array as a "linked list" where each index points to nums[index].

Index → Value → Next jump

0 → 1 → (goes to index 1)
1 → 3 → (goes to index 3)
3 → 2 → (goes to index 2)
2 → 4 → (goes to index 4)
4 → 2 → (goes back to index 2)

So the path looks like:

0 → 1 → 3 → 2 → 4  
            ↑     ↓
            ←←←←←←

There is a cycle: (2 → 4 → 2)

- Duplicate value = 2
- Cycle entry point = 2

Floyd’s algorithm works in 2 steps:
1. slow (1 step) and fast (2 steps) meet inside the cycle.
2. reset fast to start; move both 1 step each → meeting point is duplicate.

=======================================================
*/
