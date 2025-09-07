#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Helper function: expand around the given center and return the palindrome substring
    string expandAroundCenter(string& s, int left, int right) {
        // Keep expanding as long as we stay within bounds
        // and characters at left and right are the same
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }
        // When the loop breaks, indices left and right are one step outside
        // the palindrome boundaries, so we return the valid substring
        return s.substr(left + 1, right - left - 1);
    }

    // Main function to find longest palindromic substring
    string longestPalindrome(string s) {
        if (s.size() <= 1) return s; // single char or empty string is palindrome itself

        string longest = ""; // will store the answer

        // Try each character as the center
        for (int i = 0; i < s.size(); i++) {
            // Odd-length palindrome: center at s[i]
            string odd = expandAroundCenter(s, i, i);

            // Even-length palindrome: center between s[i] and s[i+1]
            string even = expandAroundCenter(s, i, i+1);

            // Update longest if found bigger palindrome
            if (odd.size() > longest.size()) longest = odd;
            if (even.size() > longest.size()) longest = even;
        }

        return longest;
    }
};

// Driver code to test
int main() {
    Solution sol;

    string s1 = "babad";
    string s2 = "cbbd";
    string s3 = "racecar";
    string s4 = "a";

    cout << "Input: " << s1 << " -> Longest Palindrome: " << sol.longestPalindrome(s1) << endl;
    cout << "Input: " << s2 << " -> Longest Palindrome: " << sol.longestPalindrome(s2) << endl;
    cout << "Input: " << s3 << " -> Longest Palindrome: " << sol.longestPalindrome(s3) << endl;
    cout << "Input: " << s4 << " -> Longest Palindrome: " << sol.longestPalindrome(s4) << endl;

    return 0;
}
