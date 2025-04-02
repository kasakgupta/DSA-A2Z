#include <iostream>
#include <vector>
using namespace std;

/*
Moore's Voting Algorithm to find the majority element in an array.
A majority element appears more than n/2 times in an array of size n.
*/

int majorityElement(vector<int>& nums) {
    int cnt = 0;   // Counter to track potential majority element
    int el = -1;   // Variable to store candidate for majority element

    // Phase 1: Find Candidate for Majority Element
    for (int i = 0; i < nums.size(); i++) {
        if (cnt == 0) {
            el = nums[i]; // Assume current number is majority
            cnt = 1;
        } else if (el == nums[i]) {
            cnt++; // If same element, increase count
        } else {
            cnt--; // If different element, decrease count
        }
    }

    // Phase 2: Verify if Candidate is Majority
    int cnt1 = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (el == nums[i]) {
            cnt1++;
        }
    }

    // If count of candidate is greater than n/2, return it; otherwise, return -1
    return (cnt1 > nums.size() / 2) ? el : -1;
}

int main() {
    vector<int> nums = {3, 3, 4, 2, 3, 3, 3, 5}; // Test case

    int result = majorityElement(nums);
    if (result != -1)
        cout << "Majority Element: " << result << endl;
    else
        cout << "No Majority Element Found" << endl;

    return 0;
}
