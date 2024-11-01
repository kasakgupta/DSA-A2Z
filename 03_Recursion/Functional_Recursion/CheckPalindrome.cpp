#include <iostream>
using namespace std;

/*
    Function to check if a string is a palindrome using recursion
    - The function `CheckPalindrome` compares characters from the start and end of the string,
      moving towards the center.
    - It takes the current index `i` and checks if `s[i]` is equal to `s[s.size() - i - 1]`.
    - The base case is reached when `i` reaches or exceeds `s.size() / 2`, meaning all characters
      have been checked.
*/

bool CheckPalindrome(int i, string &s) {
    // Base case: If `i` has reached the middle of the string, it's a palindrome
    if (i >= s.size() / 2)
        return true;

    // Check if the characters at `i` and `s.size() - i - 1` are the same
    // If not, return false as the string is not a palindrome
    if (s[i] != s[s.size() - i - 1])
        return false;

    // Recursive call to check the next pair of characters
    return CheckPalindrome(i + 1, s);
}

int main() {
    string s = "madam"; // Sample string to check

    // Call the function to check if `s` is a palindrome and output the result
    cout << (CheckPalindrome(0, s) ? "Palindrome" : "Not a palindrome") << endl;

    return 0;
}
