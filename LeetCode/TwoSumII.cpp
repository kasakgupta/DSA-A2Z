#include<iostream>
#include<vector>
using namespace std;

// ✅ Function to find two indices such that their values sum up to target
vector<int> twoSum(vector<int>& numbers, int target) {
    int left = 0;                          // Start pointer
    int right = numbers.size() - 1;       // End pointer

    while (left < right) {
        int sum = numbers[left] + numbers[right]; // Calculate current sum

        if (sum == target) {
            // Return the 1-based indices (as required by the problem)
            return {left + 1, right + 1};
        }
        else if (sum < target) {
            left++;   // Move left pointer to increase the sum
        }
        else {
            right--;  // Move right pointer to decrease the sum
        }
    }

    // This line technically won't be reached as the problem guarantees one solution
    return {};
}

// ✅ Driver Code
int main() {
    vector<int> numbers = {2, 7, 11, 15};  // Sorted input array
    int target = 9;                        // Target sum to find

    vector<int> result = twoSum(numbers, target);  // Call the function

    cout << "Indices of the two numbers are: ";
    for (int index : result) {
        cout << index << " ";             // Output should be: 1 2
    }
    cout << endl;

    return 0;
}
