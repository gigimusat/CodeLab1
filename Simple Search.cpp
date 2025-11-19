#include<iostream>
#include <string>
using namespace std;
int main() {
    string names[] =  { "Jake", "Zac", "Ian", "Ron", "Sam", "Dave"}; // Array of names
    string search_name; // Variable to hold the name to search for
    cout << "Enter a name to search: "; // Prompt user for input
    cin >> search_name; // Read the name from user input
    bool found = false; // Flag to indicate if the name was found
    for (const string& name : names) { // Range-based for loop to search through names
        if (name == search_name) { // Check if the current name matches the search name
            found = true; // Set found flag to true
            break; // Exit the loop early since we found the name
        }
    }
    if (found) {
        cout << search_name << " was found in the list." << endl; // Name was found
    } else { 
        cout << search_name << " was not found in the list." << endl; // Name was not found
    }
    return 0;

}
    

