#include <iostream>
using namespace std;

// Function to input an array of numbers
void inputNumbers(int arr[], int n) {
    cout << "Enter " << n << " digits: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

// Function to calculate the sum of numbers in an array
int calculateSum(const int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int number;

    cout << "Enter the number of elements: ";
    cin >> number;

    int a[number];

    inputNumbers(a, number);

    int sum = calculateSum(a, number);

    cout << "The sum of the numbers is: " << sum << endl;

    return 0;
}
