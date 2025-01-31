#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to determine if each child can have the greatest number of candies
vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> result;
    int max = *max_element(candies.begin(), candies.end()); // Find the maximum number of candies any child currently has
    
    // Iterate through each child's candies and check if adding extraCandies makes them the highest
    for (int i = 0; i < candies.size(); i++) {
        if ((candies[i] + extraCandies) >= max) {
            result.push_back(true); // If true, the child can have the greatest number of candies
        } else {
            result.push_back(false); // Otherwise, they cannot
        }
    }
    return result;
}

int main() {
    vector<int> candies = {2, 3, 5, 1, 3}; // Example input
    int extraCandies = 3; // Extra candies to distribute
    
    vector<bool> result = kidsWithCandies(candies, extraCandies); // Get the result
    
    // Print the result
    cout << "Result: ";
    for (bool val : result) {
        cout << (val ? "true" : "false") << " "; // Print true or false for each child
    }
    cout << endl;
    
    return 0; // Return successful execution
}
