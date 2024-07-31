#include <iostream>
using namespace std;
/*
a. Declare an array of integers with a size of 10 and initialize it with some values
b. Find and display the sum of all even numbers in the array.
c. Find and display the product of all odd numbers in the array.
d. Determine and display the average of all numbers in the array.
*/  

// Function to calculate the sum of even numbers
int sumOfEvenNumbers(const int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            sum += array[i];
        }
    }
    return sum;
}

// Function to calculate the product of odd numbers
int productOfOddNumbers(const int array[], int size) {
    int product = 1;
    for (int i = 0; i < size; i++) {
        if (array[i] % 2 != 0) {
            product *= array[i];
        }
    }
    return product;
}

// Function to calculate the average of all numbers
float averageOfNumbers(const int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return static_cast<float>(sum) / size;
}

// Function to display results
void displayResults(int sumEven, int productOdd, float average) {
    cout << "Sum of even numbers in array is " << sumEven << endl;
    cout << "Product of odd numbers in array is " << productOdd << endl;
    cout << "The average of these numbers is " << average << endl;
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]);

    int sumEven = sumOfEvenNumbers(array, size);
    int productOdd = productOfOddNumbers(array, size);
    float average = averageOfNumbers(array, size);

    displayResults(sumEven, productOdd, average);

    return 0;
}
