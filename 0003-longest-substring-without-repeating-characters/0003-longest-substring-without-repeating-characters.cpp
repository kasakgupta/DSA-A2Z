class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mpp;
        int left = 0;
        int maxLength = 0;

        for (int i = 0; i < s.size(); i++) {

            if (mpp.find(s[i]) != mpp.end()) {
                left = max(left, mpp[s[i]] + 1);
            }

            mpp[s[i]] = i;

            maxLength = max(maxLength, i - left + 1);
        }

        return maxLength;
    }
};