#include <bits/stdc++.h>
using namespace std;

// Function to find all majority elements (appearing > n/3 times)
vector<int> majorityElement(vector<int>& nums) {
    // Step 1: Initialize counters and potential candidates
    int cnt1 = 0, cnt2 = 0;
    int el1 = INT_MIN, el2 = INT_MIN;

    // Step 2: Voting phase (Boyermoore Voting Algorithm modified for n/3)
    for (int num : nums) {
        if (el1 == num) {             // if current element matches candidate1
            cnt1++;
        } 
        else if (el2 == num) {        // if current element matches candidate2
            cnt2++;
        } 
        else if (cnt1 == 0) {         // if candidate1 slot is free
            el1 = num;
            cnt1 = 1;
        } 
        else if (cnt2 == 0) {         // if candidate2 slot is free
            el2 = num;
            cnt2 = 1;
        } 
        else {                        // if current element doesn't match any candidate
            cnt1--;
            cnt2--;
        }
    }

    // Step 3: Verification phase
    // We need to check if el1 or el2 actually occur more than floor(n/3)
    cnt1 = cnt2 = 0;
    for (int num : nums) {
        if (num == el1) cnt1++;
        else if (num == el2) cnt2++;
    }

    // Step 4: Collect results
    vector<int> ans;
    int threshold = nums.size() / 3;
    if (cnt1 > threshold) ans.push_back(el1);
    if (cnt2 > threshold) ans.push_back(el2);

    sort(ans.begin(), ans.end()); // keep answer sorted
    return ans;
}

// ---------------- DRIVER CODE ----------------
int main() {
    vector<int> nums1 = {3, 2, 3};
    vector<int> nums2 = {1, 1, 1, 3, 3, 2, 2, 2};
    vector<int> nums3 = {2, 2, 9, 3, 9, 3, 9, 3, 9};

    vector<vector<int>> tests = {nums1, nums2, nums3};

    for (int i = 0; i < tests.size(); i++) {
        cout << "Test " << i+1 << ": ";
        vector<int> res = majorityElement(tests[i]);
        for (int x : res) cout << x << " ";
        cout << endl;
    }

    return 0;
}
