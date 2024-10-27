#include <iostream>
#include <cmath> // For using the pow() function
using namespace std;

// Function to check if a number is an Armstrong number
bool checkArmstrong(int n) {
    int dup = n; // Duplicate of original number to compare at the end
    int sum = 0; // To store the sum of each digit raised to the power of numDigits
    
    int numDigits = 0;
    int temp = n;

    // Calculate the number of digits in n
    while (temp > 0) {
        temp = temp / 10;
        numDigits++;
    }

    // Calculate the Armstrong sum
    while (n > 0) {
        int ld = n % 10; // Extract the last digit
        sum += pow(ld, numDigits); // Add the last digit raised to numDigits power
        n = n / 10; // Remove the last digit
    }

    // Check if the sum of powered digits equals the original number
    return dup == sum;
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    // Check and display if the number is an Armstrong number
    if (checkArmstrong(n)) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }

    return 0;
}
