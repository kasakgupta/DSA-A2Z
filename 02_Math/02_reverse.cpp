#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n; // Input the number to be reversed

    int rev_num = 0; // Variable to store the reversed number

    // Loop until all digits are processed
    while (n > 0) {
        int ld = n % 10; // Extract the last digit of n
        rev_num = (rev_num * 10) + ld; // Add the last digit to rev_num
        n = n / 10; // Remove the last digit from n by dividing it by 10
    }

    cout << "Reversed number: " << rev_num << endl; // Output the reversed number
    return 0;
}
