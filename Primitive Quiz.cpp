#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 // Program to conduct a primitive quiz on European capitals
int main() {
    string questions[5] = { // Questions for the quiz
        "What is the capital of France?",
        "What is the capital of Germany?",
        "What is the capital of Italy?",
        "What is the capital of Spain?",
        "What is the capital of Portugal?"
    };

    string answers[5] = { // Correct answers
        "Paris",
        "Berlin",
        "Rome",
        "Madrid",
        "Lisbon"
    };
    string user_answer; // Variable to hold user's answer
    for (int i = 0; i < 5; i++) { // Loop through each question
        cout << questions[i] << " "; // Prompt the user with the question
        getline(cin, user_answer); // Read the user's answer
        // Convert user answer to lowercase for case-insensitive comparison
        transform(user_answer.begin(), user_answer.end(), user_answer.begin(), ::tolower); // Convert to lowercase
        if (user_answer == answers[i]) { // Check if the answer is correct
            cout << "Correct!" << endl; // Inform the user of a correct answer
        } else {
            cout << "Incorrect. The correct answer is " << answers[i] << "." << endl; // Provide the correct answer
        }
    }
    return 0; // Indicate that the program ended successfully
}


    