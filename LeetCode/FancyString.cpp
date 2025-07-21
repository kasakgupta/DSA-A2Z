#include <iostream>
#include <string>
using namespace std;

// Function to make the string fancy
string makeFancyString(string s) {
    string result = "";

    // Traverse the string character by character
    for (int i = 0; i < s.length(); ++i) {
        int len = result.length();

        // Check if the last two characters in result
        // are the same as current character (s[i])
        if (len >= 2 && result[len - 1] == s[i] &&
            result[len - 2] == s[i]) {
            continue; // Skip current character to avoid 3 in a row
        }

        result += s[i]; // Add character to result
    }

    return result;
}

// Driver code to test the function
int main() {
    string s1 = "leeetcode";
    string s2 = "aaabaaaa";
    string s3 = "aab";

    cout << "Original: " << s1 << " -> Fancy: " << makeFancyString(s1) << endl;
    cout << "Original: " << s2 << " -> Fancy: " << makeFancyString(s2) << endl;
    cout << "Original: " << s3 << " -> Fancy: " << makeFancyString(s3) << endl;

    return 0;
}
