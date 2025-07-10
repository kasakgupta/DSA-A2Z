#include <iostream>
#include <vector>
using namespace std;

/*
📌 Function to find the length of the longest subarray
   with sum equal to a given value 'k'.
   (Works correctly only if array contains non-negative integers)
*/
int longestSubarray(vector<int>& nums, int k) {
    int left = 0, right = 0;
    int sum = nums[0];         // Sum of the current window
    int maxLen = 0;            // To track maximum length found
    int n = nums.size();

    // Traverse using right pointer till end of array
    while (right < n) {
        // Shrink the window from the left side if sum becomes greater than k
        while (left <= right && sum > k) {
            sum -= nums[left];
            left++;
        }

        // If we found a subarray with sum equal to k, update maxLen
        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }

        // Expand the window to the right
        right++;
        if (right < n) {
            sum += nums[right];
        }
    }

    return maxLen;
}

// ✅ Function to create vector from array (for testing)
vector<int> createVector(int arr[], int size) {
    vector<int> result;
    for (int i = 0; i < size; i++) {
        result.push_back(arr[i]);
    }
    return result;
}

// 🚀 Driver Code
int main() {
    // Test Case 1
    int arr1[] = {10, 5, 2, 7, 1, 9};
    int k1 = 15;
    vector<int> nums1 = createVector(arr1, 6);
    cout << "Test Case 1 - Length of Longest Subarray: " << longestSubarray(nums1, k1) << endl;

    // Test Case 2
    int arr2[] = {-3, 2, 1};
    int k2 = 6;
    vector<int> nums2 = createVector(arr2, 3);
    cout << "Test Case 2 - Length of Longest Subarray: " << longestSubarray(nums2, k2) << endl;

    return 0;
}
