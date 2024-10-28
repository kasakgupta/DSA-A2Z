#include <iostream>
using namespace std;

/*
    Function to print a name using recursion
    - The function `printName` recursively prints the name until the count reaches `n`.
    - `i` is the current count, and `n` is the total number of times to print the name.
    - The function stops calling itself when `i` becomes greater than `n` (base case).
*/

void printName(int i, int n) {
    // Base case: If the current count `i` exceeds `n`, stop the recursion
    if (i > n) return;

    // Recursive case: Print the name and call the function with an incremented count
    cout << "Kasak" << endl;
    printName(i + 1, n);  // Recursive call with `i` increased by 1
}

int main() {
    cout << "Enter the number of times you want to print the name: ";
    int n;
    cin >> n;

    // Initial call to the function, starting the count at 1
    printName(1, n);

    return 0;
}
