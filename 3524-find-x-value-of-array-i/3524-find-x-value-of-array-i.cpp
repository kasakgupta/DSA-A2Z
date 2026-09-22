class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {

        vector<long long> result(k, 0);
        vector<long long> dp(k, 0);

        for (int num : nums) {

            vector<long long> next(k, 0);

            int x = num % k;
        
            next[x]++;

            for (int r = 0; r < k; r++) {

                int newRemainder = (r * x) % k;

                next[newRemainder] += dp[r];
            }

            // Current dp update
            dp = next;

            // Final answer
            for (int r = 0; r < k; r++) {
                result[r] += dp[r];
            }
        }

        return result;
    }
};