#include <iostream>
using namespace std;

void printNum(int i, int n) {
    // Base case: If the current count `i` exceeds `n`, stop the recursion
    if (i > n) return;

    // Recursive case: Print the number and call the function with an incremented count
    cout << i<< endl;
    printNum(i + 1, n);  // Recursive call with `i` increased by 1
}

int main() {
    cout << "Enter the value of n: ";
    int n;
    cin >> n;

    // Initial call to the function, starting the count at 1
    printNum(1, n);

    return 0;
}