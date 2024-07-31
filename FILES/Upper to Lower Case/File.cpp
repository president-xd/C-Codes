#include <iostream>
using namespace std;

// Function to convert uppercase to lowercase
char toLowercase(char character) {
    return character + 32;
}

int main() {
    char character;
    cout << "Enter any uppercase character: ";
    cin >> character;

    if (character >= 'A' && character <= 'Z') {
        char newch = toLowercase(character);
        cout << "The lowercase is " << newch << endl;
    } else {
        cout << "The character is not an uppercase letter." << endl;
    }

    return 0;
}
