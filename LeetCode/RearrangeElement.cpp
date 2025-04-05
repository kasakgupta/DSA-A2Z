#include <iostream>
#include <vector>
using namespace std;

// Function to rearrange elements with alternate positive and negative values
vector<int> rearrangeArray(vector<int> &nums) {
    int n = nums.size();
    vector<int> result(n);  // Output array of same size

    int posIndex = 0;  // Even indices for positive numbers
    int negIndex = 1;  // Odd indices for negative numbers

    // Traverse the input array and place positives and negatives at correct indices
    for (int i = 0; i < n; i++) {
        if (nums[i] >= 0) {
            result[posIndex] = nums[i];
            posIndex += 2;  // Move to next even index
        } else {
            result[negIndex] = nums[i];
            negIndex += 2;  // Move to next odd index
        }
    }

    return result;
}

// Driver code to test the function
int main() {
    vector<int> testCase = {3, 1, -2, -5, 2, -4};

    vector<int> result = rearrangeArray(testCase);

    cout << "The modified array:" << endl;
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
