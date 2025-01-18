#include <bits/stdc++.h>
using namespace std;

// Function to reverse words in a string
string reverseWords(string s) {
    string ans; // Final result string
    reverse(s.begin(), s.end()); // Reverse the entire string
    
    int i = 0; 
    while (i < s.size()) {
        // Skip leading spaces
        while (i < s.size() && s[i] == ' ') i++;

        // Extract the current word
        string word = "";
        while (i < s.size() && s[i] != ' ') {
            word += s[i];
            i++;
        }

        // Reverse the word and add it to the result
        if (!word.empty()) {
            reverse(word.begin(), word.end());
            if (!ans.empty()) ans += " "; // Add a space if the result isn't empty
            ans += word;
        }
    }

    return ans; // Final reversed words in correct order
}

// Driver code
int main() {
    // Test cases
    vector<string> testCases = {
        "the sky is blue",
        "  hello world  ",
        "a good   example",
        "    one more test    ",
        "singleWord",
        "    ",
        ""
    };

    for (const string& test : testCases) {
        cout << "Input: \"" << test << "\"" << endl;
        cout << "Output: \"" << reverseWords(test) << "\"" << endl;
        cout << "-----------------------" << endl;
    }

    return 0;
}
