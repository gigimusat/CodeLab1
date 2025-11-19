#include<iostream>
using namespace std;

// Program to check if a number is even or odd
int main() {
    int number; // Variable to hold the user input
    cout << "Enter a number: "; // Prompt user for input
    cin >> number; // Read the number from user input

    // Check if the number is even or odd using modulus operator
    if (number % 2 == 0) {
        cout << number << " is even." << endl; // Number is even
    } else {
        cout << number << " is odd." << endl; // Number is odd
    }
    return 0; // Indicate that the program ended successfully
}