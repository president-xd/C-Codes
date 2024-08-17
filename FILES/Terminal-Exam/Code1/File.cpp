#include <iostream>
using namespace std;
/*
A company wants to transmit data over the telephone but is concerned that
its phones may be tapped. It has asked you to write a program that will encrypt
the data so that it may be transmitted more securely. All the data transmitted is 4
digit integers. Your program should read four digit integer entered by the user
and calls a function encrypt which takes four digits as arguments and encrypt it as
follows:
Replace each digit with the result of adding 4 to the digit and getting the reminder
after dividing the new value by 10.
Calls another function swap which swaps the first digit with the third, and second
digit with the fourth using pass by reference.
Then it prints the encrypted integer.
*/
int encrypt(int number) {
    int array[4], temp;
    for (int i = 3; i >= 0; i--) {
        array[i] = (number % 10 + 4) % 10;
        number /= 10;
    }
    temp = array[0];
    array[0] = array[2];
    array[2] = temp;
    temp = array[1];
    array[1] = array[3];
    array[3] = temp;
    number = array[0] * 1000 + array[1] * 100 + array[2] * 10 + array[3];
    return number;
}

int main() {
    int number;
    cout << "Enter the number to encrypt: ";
    cin >> number;
    cout << "The Encrypted form of this number " << number << " is " << encrypt(number) << endl;
    return 0;
}
