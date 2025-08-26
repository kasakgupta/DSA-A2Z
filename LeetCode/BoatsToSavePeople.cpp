#include <bits/stdc++.h>
using namespace std;

// Function to calculate minimum number of boats
int numRescueBoats(vector<int>& people, int limit) {
    // Step 1: Sort people by weight
    sort(people.begin(), people.end());

    int left = 0;                  // lightest person
    int right = people.size() - 1; // heaviest person
    int boats_used = 0;

    // Step 2: Use two pointers to decide boat allocations
    while (left <= right) {
        // If lightest + heaviest can share a boat
        if (people[left] + people[right] <= limit) {
            left++;   // move lightest
            right--;  // move heaviest
        } else {
            // Otherwise, heaviest goes alone
            right--;
        }
        // In both cases, we used one boat
        boats_used++;
    }

    return boats_used;
}

// ================= DRIVER CODE =================
int main() {
    // Example 1
    vector<int> people1 = {1, 2};
    int limit1 = 3;
    cout << "Example 1 Output: " 
         << numRescueBoats(people1, limit1) << endl;
    // Expected: 1 (boat: [1,2])

    // Example 2
    vector<int> people2 = {3, 2, 2, 1};
    int limit2 = 3;
    cout << "Example 2 Output: " 
         << numRescueBoats(people2, limit2) << endl;
    // Expected: 3 (boats: [1,2], [2], [3])

    // Example 3
    vector<int> people3 = {3, 5, 3, 4};
    int limit3 = 5;
    cout << "Example 3 Output: " 
         << numRescueBoats(people3, limit3) << endl;
    // Expected: 4 (boats: [3], [3], [4], [5])

    return 0;
}
