#include <iostream>
using namespace std;
// Program to count from 0 to 50 in increments of 1
int main() {
  cout << "Counting from 0 to 50 in increments of 1:" << endl; // Print message

    for (int i = 0; i <= 50; i++) { // Loop from 1 to 50
        cout << i << " "; // Print the current number
    
}
cout<<endl; // New line after counting

 // Program to count from 50 to 0 in decrements of 1
  cout << "Counting from 50 to 0 in decrements of 1:" << endl; // Print message
    for (int i = 50; i >= 0; i--) { // Loop from 50 to 0
        cout << i << " "; // Print the current number
    }
    cout << endl; // New line after counting

    // Program to count even numbers from 30 to 50 in increments of 1
    cout << "Counting from 30 to 50 in increments of 1:" << endl; // Print message
    for (int i = 30; i <= 50; i ++) { // Loop from 30 to 50, incrementing by 1
        cout << i << " "; // Print the current even number
    }
    cout << endl; // New line after counting

    //Program to count from 50 to 10 in decrements of 2
    cout << "Counting from 50 to 10 in decrements of 2:" << endl; // Print message
    for (int i = 50; i >= 10; i -= 2) { // Loop from 50 to 10, decrementing by 2
        cout << i << " "; // Print the current number
    }
    cout << endl; // New line after counting

    //Program to count from 100 to 200 in increments of 5
    cout << "Counting from 100 to 200 in increments of 5:" << endl; // Print message
    for (int i = 100; i <= 200; i += 5) { // Loop from 100 to 200, incrementing by 5
        cout << i << " "; // Print the current number
    }
    cout << endl; // New line after counting
    return 0; // Indicate that the program ended successfully
}
