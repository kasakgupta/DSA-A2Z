#include <iostream>
using namespace std;

/*
    Backtracking Introduction:
    - Backtracking is a technique in recursion where the function executes some tasks
      after returning from a recursive call rather than before it.
    - This approach helps achieve specific orderings in recursive functions, 
      as actions are performed on the way back up the recursive calls.
    - In this example, we use backtracking to print numbers from 1 to `n` 
      by first reaching the base case and then printing each number during the return phase.
*/

// Function to print numbers from 1 to n using backtracking
void printNum(int i) {
    // Base case: If `i` is less than 1, stop recursion
    if (i < 1) return;

    // Recursive call: Move towards the base case (i = 1) by decreasing `i`
    printNum(i - 1);

    // Backtracking step: Print `i` after returning from the recursive call
    cout << i << " ";
}

int main() {
    int i;
    cout << "Enter a positive integer: ";
    cin >> i;

    // Call the function to print numbers from 1 to i using backtracking
    printNum(i);

    return 0;
}
