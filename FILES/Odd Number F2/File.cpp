#include <iostream>
#include <cmath>

using namespace std;

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

int main() {
    int number;

    cout << "Enter any number: ";
    cin >> number;

    if (prime(number)) {
        cout << "The number is a prime number." << endl;
    } else {
        cout << "The number is not a prime number." << endl;
    }

    return 0;
}
