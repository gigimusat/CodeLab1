#include<iostream>
using namespace std;

// Program to perform a brute force attack by trying all possible combinations of a 5-digit password
int main() {
    const int correctpassword = 12345; // Predefined correct password
    int userpassword; // Variable to hold user input password
    int attemptsleft = 5; // Number of attempts allowed
while (attemptsleft > 0) { // Loop until attempts run out
        cout << "Enter the 5-digit password: "; // Prompt user for password
        cin >> userpassword; // Read user input

        if (userpassword == correctpassword) { // Check if the password is correct
            cout << "Welcome to the Secure Area!" << endl; // Correct password
            break; // Exit loop
        } else {
            attemptsleft--; // Decrement attempts left
            cout << "Incorrect password. Attempts left: " << attemptsleft << endl; // Inform user of incorrect password
        }
    }
    if (attemptsleft == 0) { // All attempts used
        cout << "5 failed attempts! The authorities have been alerted!" << endl; // Alert message
    }
    return 0; // Indicate that the program ended successfully
}