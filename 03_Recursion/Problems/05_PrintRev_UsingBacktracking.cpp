#include <iostream>
using namespace std;

/*
    Function to print numbers from `n` to 1 using backtracking
    - The function `printNum` first recursively calls itself to reach the highest value (n).
    - After reaching the base case, it prints each number in descending order
      as the function unwinds on the way back from each recursive call.
*/

void printNum(int i, int n) {
    // Base case: Stop recursion when `i` exceeds `n`
    if (i > n)
        return;

    // Recursive call: Progresses towards the base case by incrementing `i`
    printNum(i + 1, n);

    // Backtracking step: Print the current value of `i` after returning from the recursive call
    cout << i << " ";
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    // Call the function to print numbers from 1 to n using backtracking
    printNum(1, n);

    return 0;
}
