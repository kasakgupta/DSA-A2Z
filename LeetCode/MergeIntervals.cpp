#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();

        // Step 1: Sort intervals based on starting time
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;

        // Step 2: Traverse each interval
        for (int i = 0; i < n; i++) {

            // If ans is empty OR current interval's start is greater than last interval's end → no overlap
            if (ans.empty() || intervals[i][0] > ans.back()[1]) {
                ans.push_back(intervals[i]); // Push this interval into ans
            } 
            else {
                // Overlap case → merge intervals by updating the end
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
        }
        return ans;
    }
};

int main() {
    // Example input: intervals
    vector<vector<int>> intervals = {
        {1, 3}, {2, 6}, {8, 10}, {15, 18}
    };

    Solution obj;
    vector<vector<int>> merged = obj.merge(intervals);

    // Output the merged intervals
    cout << "Merged Intervals: \n";
    for (auto &interval : merged) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    cout << endl;

    return 0;
}
