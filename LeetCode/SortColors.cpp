#include <bits/stdc++.h>
using namespace std;

// Function to sort colors (0s, 1s, and 2s) using Dutch National Flag Algorithm
void sortColors(vector<int>& nums) {
    int low = 0, mid = 0, high = nums.size() - 1;

    // Traverse the array until mid crosses high
    while (mid <= high) {
        if (nums[mid] == 0) { 
            // If element is 0, swap it with nums[low] and move both pointers forward
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        } 
        else if (nums[mid] == 1) { 
            // If element is 1, it's in the correct place, just move mid forward
            mid++;
        } 
        else { 
            // If element is 2, swap it with nums[high] and move high pointer backward
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

// Driver function to test the sorting
int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    cout << "Original Array: ";
    for (int num : nums) cout << num << " ";
    cout << endl;

    sortColors(nums); // Call sorting function

    cout << "Sorted Array: ";
    for (int num : nums) cout << num << " ";
    cout << endl;

    return 0;
}
