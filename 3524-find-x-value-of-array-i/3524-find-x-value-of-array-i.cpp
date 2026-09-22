class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {

        vector<long long> result(k, 0);

        // Current position ke subarrays
        vector<long long> dp(k, 0);

        for (int num : nums) {

            vector<long long> next(k, 0);

            int x = num % k;

            // Sirf current number wala subarray
            next[x]++;

            // Purane subarrays mein current number add karo
            for (int r = 0; r < k; r++) {

                int newRemainder = (r * x) % k;

                next[newRemainder] += dp[r];
            }

            // Current dp update
            dp = next;

            // Final answer mein add karo
            for (int r = 0; r < k; r++) {
                result[r] += dp[r];
            }
        }

        return result;
    }
};