#include <iostream>
using namespace std;
/*
Write a program that reads two integers min and max and then reads the
reminder of its input, counting the values greater then min and those less then
max. Assume that all the input is positive and is terminated by a negative number.
When input termination occurs, print the number of integers greater than min
and less than max.
*/
int countNumbersInRange(int min, int max) {
    int number, count = 0;
    cout << "Enter the numbers (enter a negative number to stop): ";
    cin >> number;
    while (number >= 0) {
        if (number > min && number < max) {
            count++;
        }
        cin >> number;
    }
    return count;
}

int main() {
    int min, max;
    cout << "Enter the Minimum number: ";
    cin >> min;
    cout << "Enter the Maximum number: ";
    cin >> max;

    int count = countNumbersInRange(min, max);

    cout << "The number of integers greater than " << min << " and less than " << max << " is: " << count << endl;
    
    return 0;
}
