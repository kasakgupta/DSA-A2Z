#include <iostream>
using namespace std;

/* 
    Recursion Introduction:
    - Recursion is a process in which a function calls itself.
    - It allows us to solve problems by breaking them down into smaller, 
      simpler sub-problems.
    - Each recursive call reduces the problem size until a base case is reached,
      which stops the recursion.
    - In this example, we'll use recursion to calculate the factorial of a number.
*/

// Function to calculate factorial using recursion
int factorial(int n) {
    // Base case: if n is 0 or 1, the factorial is 1
    if (n <= 1) {
        return 1;
    }
    // Recursive case: n * factorial of (n - 1)
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    // Asking the user for a number
    cout << "Enter a positive integer: ";
    cin >> num;

    // Displaying the factorial of the entered number
    cout << "Factorial of " << num << " is " << factorial(num) << endl;

    return 0;
}
