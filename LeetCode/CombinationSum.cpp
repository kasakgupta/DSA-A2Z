#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find all unique combinations that sum up to the target
void findCombination(vector<int>& candidates, int target, vector<vector<int>>& result, vector<int>& CurrentCombination, int index) {
    if (target == 0) { // If the target sum is achieved, add the combination to the result
        result.push_back(CurrentCombination);
        return;
    }
    
    // Sort to ensure elements are considered in increasing order
    sort(candidates.begin(), candidates.end());
    
    for (int i = index; i < candidates.size(); i++) {
        if (candidates[i] > target) { // If the current candidate exceeds target, break loop
            break;
        }
        
        CurrentCombination.push_back(candidates[i]); // Include the current candidate
        findCombination(candidates, target - candidates[i], result, CurrentCombination, i); // Recursive call
        CurrentCombination.pop_back(); // Backtrack
    }
}

// Wrapper function to start the combination finding process
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> result;
    vector<int> CurrentCombination;
    findCombination(candidates, target, result, CurrentCombination, 0);
    return result;
}

// Driver code to test the function
int main() {
    vector<int> candidates = {2, 3, 6, 7}; // List of candidate numbers
    int target = 7; // Target sum
    
    vector<vector<int>> result = combinationSum(candidates, target);
    
    // Display the results
    cout << "Combinations that sum up to " << target << ":\n";
    for (const auto& combination : result) {
        cout << "[ ";
        for (int num : combination) {
            cout << num << " ";
        }
        cout << "]\n";
    }
    
    return 0;
}
