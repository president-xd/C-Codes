#include <iostream>

using namespace std;

int main() {
    int number;
    bool prime = true;

    cout << "Enter any number: ";
    cin >> number;

    if (number <= 1) {
        prime = false;
    } else {
        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                prime = false;
                break;
            }
        }
    }

    if (prime) {
        cout << "The number is a prime number." << endl;
    } else {
        cout << "The number is not a prime number." << endl;
    }

    return 0;
}
