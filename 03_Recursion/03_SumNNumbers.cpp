#include <iostream>
using namespace std;

/*
    Function to calculate the sum of numbers from 1 to `n` using parameterized recursion
    - The function `printSum` accumulates the sum by adding `i` to `sum` during each recursive call.
    - It continues to call itself with a decremented value of `i` until `i` is less than 1.
    - Once `i` is less than 1, it prints the final accumulated sum.
*/

void printSum(int i, int sum) {
    // Base case: If `i` is less than 1, print the accumulated `sum` and stop recursion
    if (i < 1) {
        cout << "Sum: " << sum;
        return;
    }

    // Recursive call: Add the current value of `i` to `sum` and call `printSum` with `i - 1`
    printSum(i - 1, sum + i);
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    // Call the function to calculate and print the sum from 1 to `n`
    printSum(n, 0);

    return 0;
}
