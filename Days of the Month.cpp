#include<iostream>
using namespace std;
//program that displays the number of days in a month based on user input
int main() {
    int month; // Variable to hold the month number
    cout << "Enter month number (1-12): "; // Prompt user for month number
    cin >> month; // Read the month number from user input

    // Determine the number of days in the specified month
    switch (month) {
        case 1: // January
        case 3: // March
        case 5: // May
        case 7: // July
        case 8: // August
        case 10: // October
        case 12: // December
            cout << "31 days" << endl; // Months with 31 days
            break;
        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            cout << "30 days" << endl; // Months with 30 days
            break;
        case 2: // February
            cout << "28 or 29 days" << endl; // February can have 28 or 29 days
            break;
        default:
            cout << "Invalid month number. Please enter a number between 1 and 12." << endl; // Invalid input handling
    }
    return 0; // Indicate that the program ended successfully
}