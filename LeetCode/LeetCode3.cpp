#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

// Function to return the length of longest substring without repeating characters
int lengthOfLongestSubstring(string s) {
    // Map to store the last index of each character seen
    unordered_map<char, int> lastSeen;

    int maxLength = 0; // Result variable to store the max length
    int left = 0;      // Left pointer of the sliding window

    // Iterate with 'right' pointer through the string
    for (int right = 0; right < s.length(); right++) {
        char ch = s[right];

        // If character is already in map AND it's within the current window
        if (lastSeen.find(ch) != lastSeen.end() && lastSeen[ch] >= left) {
            // Move the left pointer to one after the last occurrence of ch
            left = lastSeen[ch] + 1;
        }

        // Update the last seen index of the character
        lastSeen[ch] = right;

        // Update the maximum length of substring
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

// 🔹 Driver code to test the function
int main() {
    string s1 = "abcabcbb";
    string s2 = "bbbbb";
    string s3 = "pwwkew";
    string s4 = "abba";

    cout << "Test 1: " << s1 << " -> Length = " << lengthOfLongestSubstring(s1) << endl; // 3
    cout << "Test 2: " << s2 << " -> Length = " << lengthOfLongestSubstring(s2) << endl; // 1
    cout << "Test 3: " << s3 << " -> Length = " << lengthOfLongestSubstring(s3) << endl; // 3
    cout << "Test 4: " << s4 << " -> Length = " << lengthOfLongestSubstring(s4) << endl; // 2

    return 0;
}
