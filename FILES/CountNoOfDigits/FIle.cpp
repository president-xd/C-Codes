#include <iostream>
using namespace std;

// Function to count the number of digits in a number
int countNumberOfDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    int digitCount = countNumberOfDigits(number);  // Get the number of digits
    cout << "Total number of digits: " << digitCount << endl;

    return 0;
}
