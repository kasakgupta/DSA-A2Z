#include <iostream>
using namespace std;

// Function to calculate the nth Fibonacci number using recursion
int fibonacci(int n) {
    // Base case: if n is 0 or 1, return n itself
    if (n <= 1) 
        return n;

    // Multiple Recursive Calls:
    // In this function, we have two recursive calls. This is called "multiple recursion" 
    // because we call the function more than once within itself. Each call to fibonacci(n) 
    // branches out into two new calls: fibonacci(n-1) and fibonacci(n-2).
    // As a result, multiple recursion creates a "tree" of calls, with each level doubling the calls.
    // This approach can be inefficient because it recalculates the same Fibonacci values multiple times.
    
    int last = fibonacci(n - 1); // Fib(n-1)
    int slast = fibonacci(n - 2); // Fib(n-2)
    
    // Add the two results to get the nth Fibonacci number
    return last + slast;
}

int main() {
    int n;
    cout << "Enter the position of Fibonacci number to find: ";
    cin >> n;

    // Call the function and display the nth Fibonacci number
    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;
    return 0;
}
