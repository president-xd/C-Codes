#include <iostream>
using namespace std;

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two numbers
int subtract(int a, int b) {
    return a - b;
}

// Function to divide two numbers
float divide(int a, int b) {
    if (b != 0) {
        return static_cast<float>(a) / b;
    } else {
        cout << "Error: Division by zero is undefined." << endl;
        return 0;
    }
}

// Function to multiply two numbers
float multiply(int a, int b) {
    return static_cast<float>(a) * b;
}

// Function to display the menu and get user choice
int getUserChoice() {
    int input;
    cout << "1. Press 1 to add both numbers" << endl;
    cout << "2. Press 2 to subtract both numbers" << endl;
    cout << "3. Press 3 to multiply both numbers" << endl;
    cout << "4. Press 4 to divide both numbers" << endl;
    cout << endl << "Enter your choice: ";
    cin >> input;
    return input;
}

// Function to display the result
void displayResult(float result) {
    cout << "The result is: " << result << endl;
}

int main() {
    int a, b, input;
    cout << "Enter digit one: ";
    cin >> a;
    cout << "Enter digit two: ";
    cin >> b;
    cout << endl;

    input = getUserChoice();

    switch (input) {
        case 1:
            displayResult(add(a, b));
            break;
        case 2:
            displayResult(subtract(a, b));
            break;
        case 3:
            displayResult(multiply(a, b));
            break;
        case 4:
            displayResult(divide(a, b));
            break;
        default:
            cout << "Invalid input." << endl;
    }

    return 0;
}
