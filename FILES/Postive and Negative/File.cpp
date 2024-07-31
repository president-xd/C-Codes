#include <>
using namespace std;

/*
Write a program that takes n numbers as input. It displays total positive and negative numbers
*/


// Function to get the sum of positive and negative numbers
void sumPositiveNegativeNumbers(int n, int& posSum, int& negSum) {
    int num;
    for (int i = 1; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;
        if (num > 0) {
            posSum += num;
        } else if (num < 0) {
            negSum += num;
        } else {
            cout << "Zero encountered, stopping input." << endl;
            break;
        }
    }
}

// Function to display the results
void displayResults(int posSum, int negSum) {
    cout << "The sum of positive integer numbers you entered is " << posSum << endl;
    cout << "The sum of negative integer numbers you entered is " << negSum << endl;
}

int main() {
    int n, posSum = 0, negSum = 0;

    cout << "Enter the number of times numbers will be entered: ";
    cin >> n;

    cout << "Enter numbers " << n << " times:" << endl;
    sumPositiveNegativeNumbers(n, posSum, negSum);

    displayResults(posSum, negSum);

    return 0;
}
