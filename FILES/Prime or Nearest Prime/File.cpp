#include <iostream>
using namespace std;

// Function to check if a number is prime
bool prime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to find the nearest prime number less than the given number
int nearest(int n) {
    for (int i = n - 1; i >= 2; i--) {
        if (prime(i)) {
            return i;
        }
    }
    return 0;
}

int main() {
    int number;
    cout << "Enter any number: ";
    cin >> number;

    if (prime(number)) {
        cout << "The number is prime." << endl;
    } else {
        cout << "The entered number is composite." << endl;
        cout << "The nearest prime number less than " << number << " is " << nearest(number) << endl;
    }

    return 0;
}
