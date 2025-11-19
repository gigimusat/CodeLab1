#include <iostream>
using namespace std;

int main() {
    string name, hobby;
    int age;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your favourite hobby: ";
    cin.ignore();  
    getline(cin, hobby);

    cout << "\nYour name is " << name << ", you are " << age
         << " years old, and you like " << hobby << "." << endl;

    return 0;
}

