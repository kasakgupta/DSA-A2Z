#include <iostream>
#include <vector>
using namespace std;

// Function to find the single element in a sorted array
int singleNonDuplicate(vector<int>& nums) {
    // Initialize two pointers for binary search
    int left = 0;
    int right = nums.size() - 1;

    // Perform binary search
    while (left < right) {
        // Calculate mid-point
        int mid = (left + right) / 2;

        // Ensure mid points to the first element of a pair
        if (mid % 2 == 1) {
            mid--; // Adjust mid to be even
        }

        // Check if the pair starting at mid is valid
        if (nums[mid] == nums[mid + 1]) {
            // Single element lies in the right half
            left = mid + 2;
        } else {
            // Single element lies in the left half
            right = mid;
        }
    }

    // At the end of the loop, left == right, pointing to the single element
    return nums[left];
}

int main() {
    // Test cases
    vector<int> nums1 = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    vector<int> nums2 = {3, 3, 7, 7, 10, 11, 11};

    // Call the function and print the results
    cout << "The single non-duplicate element in nums1 is: " << singleNonDuplicate(nums1) << endl;
    cout << "The single non-duplicate element in nums2 is: " << singleNonDuplicate(nums2) << endl;

    return 0;
}
