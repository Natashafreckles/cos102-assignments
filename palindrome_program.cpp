
#include <iostream>  // Allows us to use input (cin) and output (cout)
using namespace std;

int main() {

    // Declare the variables we need
    int number, originalNumber, reversedNumber = 0, remainder;

    // Ask the user to enter a number
    cout << "Enter a number: ";
    cin >> number;

    // Store the original number so we can compare it later
    originalNumber = number;

    // Repeat the process until the number becomes 0
    while (number > 0) {

        // Get the last digit of the number
        remainder = number % 10;

        // Add the last digit to the reversed number
        reversedNumber = (reversedNumber * 10) + remainder;

        // Remove the last digit from the original number
        number = number / 10;
    }

    // Compare the original number with the reversed number
    if (originalNumber == reversedNumber) {

        // Display this message if both numbers are equal
        cout << "It is a Palindrome number." << endl;
    }
    else {

        // Display this message if both numbers are different
        cout << "It is not a Palindrome number." << endl;
    }

    return 0; // End the program successfully
}
