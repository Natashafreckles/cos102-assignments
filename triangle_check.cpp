// Provides input and output facilities such as cin and cout.
#include <iostream>

// Lets the program use standard-library names without the std:: prefix.
using namespace std;

// The program starts running here.
int main() {
    // Stores the two entered angles and the calculated third angle.
    int angle1, angle2, angle3;

    // Asks the user to enter the first angle.
    cout << "Enter first angle: ";

    // Reads the first angle from the keyboard.
    cin >> angle1;

    // Asks the user to enter the second angle.
    cout << "Enter second angle: ";

    // Reads the second angle from the keyboard
    cin >> angle2;

    // Calculates the third angle, since a triangle's angle total 180 degrees.
    angle3 = 180-(angle1+angle2);

    // Checks whether any angle is zero or negative.
    if (angle1<=0 || angle2<=0 || angle3<=0){
        // Prints an error if any angle is not positive

        cout << "Invalid triangle" << endl;
    }// Ends the invalid-triangle check.

    // Checks whether any angle is exactly 90 degrees.
    else if (angle1==90 || angle2==90 || angle3==90){

        // Reports that the triangle is right-angled.
        cout << "It is a right-angled triangle" << endl;
    } // Ends the right-angle case.

    // Runs when the angles are positive and none is 90 degrees.
    else {
        // Reports that the triangle is not right-angled.
        cout << "It is not a right-angled triangle" << endl;
    } // Ends the remaining case.

    return 0; // Ends the program successfully.
} // Ends the main function.
