#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Function to check if the input string has valid parentheses
bool isValid(string s) {
    stack<char> st;

    // Traverse each character in the string
    for (int i = 0; i < s.length(); i++) {

        // If opening bracket, push to stack
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
        } else {
            // If stack is empty and closing bracket comes, it's invalid
            if (st.size() == 0) {
                return false;
            }

            // Check if top of the stack matches the current closing bracket
            if ((st.top() == '(' && s[i] == ')') ||
                (st.top() == '{' && s[i] == '}') ||
                (st.top() == '[' && s[i] == ']')) {
                st.pop(); // It's a match, pop the top
            } else {
                return false; // Mismatch found
            }
        }
    }

    // In the end, if stack is empty, all brackets matched
    return st.size() == 0;
}

// Driver code to test isValid function
int main() {
    string s1 = "()[]{}";
    string s2 = "(]";
    string s3 = "({[]})";
    string s4 = "([)]";

    cout << s1 << " - " << (isValid(s1) ? "Valid" : "Invalid") << endl;
    cout << s2 << " - " << (isValid(s2) ? "Valid" : "Invalid") << endl;
    cout << s3 << " - " << (isValid(s3) ? "Valid" : "Invalid") << endl;
    cout << s4 << " - " << (isValid(s4) ? "Valid" : "Invalid") << endl;

    return 0;
}
