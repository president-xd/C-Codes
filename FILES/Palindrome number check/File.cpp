#include <iostream>
using namespace std;

// Function to check if a number is a palindrome
bool isPalindrome(int number) {
    int original = number;
    int reverse = 0;
    int digit;

    while (number != 0) {
        digit = number % 10;
        reverse = (reverse * 10) + digit;
        number = number / 10;
    }

    return original == reverse;
}

// Function to display the result
void displayResult(int number, bool result) {
    if (result) {
        cout << "The number " << number << " is a palindrome." << endl;
    } else {
        cout << "The number " << number << " is not a palindrome." << endl;
    }
}

int main() {
    int number;

    cout << "Enter any number: ";
    cin >> number;

    bool result = isPalindrome(number);

    displayResult(number, result);

    return 0;
}
