#include <iostream> // Include iostream library for input and output
#include <string> // Include string library for handling text input
using namespace std; // Use the standard namespace
 
// Program to collect and display a user's biography information
int main() { // Main function - execution starts here
    string name;
    string hometown;
    int age;

    // Collect biography information from the user
    cout << "Enter your full name: ";
    getline(cin, name);  // Use getline to allow spaces in the name

    
    cout << "Enter your hometown: ";
    getline(cin, hometown); // Use getline to allow spaces in the hometown

    cout << "Enter your age: ";
    cin >> age;  // Read age as an integer

    // Display the biography information
    cout << "Name: " << name << "\n"
         << "Hometown: " << hometown << "\n"
         << "Age: " << age << endl;

    return 0; // Indicate that the program ended successfully
}


