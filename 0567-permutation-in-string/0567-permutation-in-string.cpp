class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if (s1.size() > s2.size())
            return false;

        vector<int> need(26, 0);
        vector<int> window(26, 0);

        for (char c : s1) {
            need[c - 'a']++;
        }

        int left = 0;

        for (int right = 0; right < s2.size(); right++) {

            window[s2[right] - 'a']++;

            // Window becomes larger than s1
            if (right - left + 1 > s1.size()) {
                window[s2[left] - 'a']--;
                left++;
            }

            // Compare frequencies
            if (window == need) {
                return true;
            }
        }

        return false;
    }
};