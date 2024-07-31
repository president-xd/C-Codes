#include <iostream>
using namespace std;

// Function to convert lowercase to uppercase
char toUppercase(char character) {
    return character - 32;
}

int main() {
    char character;
    cout << "Enter any lowercase character: ";
    cin >> character;

    if (character >= 'a' && character <= 'z') {
        char newch = toUppercase(character);
        cout << "The uppercase is " << newch << endl;
    } else {
        cout << "The character is not a lowercase letter." << endl;
    }

    return 0;
}
