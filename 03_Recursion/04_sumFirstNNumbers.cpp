#include <iostream>
using namespace std;

/*
    Function to calculate the sum of the first N natural numbers using recursion
    - This function uses a functional approach where each recursive call returns the partial sum.
    - It calculates the sum by adding `n` to the result of the function called with `n - 1`.
*/

int sumOfFirstN(int n) {
    if (n == 0) // Base case: If n is 0, the sum is 0
        return 0;

    // Recursive call: Add `n` to the sum of the first `n - 1` numbers
    return n + sumOfFirstN(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Calculate the sum of the first N numbers by calling the recursive function
    int result = sumOfFirstN(n);

    // Display the result
    cout << "The sum of the first " << n << " numbers is: " << result << endl;

    return 0;
}
