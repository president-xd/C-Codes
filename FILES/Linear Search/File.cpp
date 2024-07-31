#include <iostream>
using namespace std;

// Function to search for a number in an array
bool linearSearch(int array[], int size, int num) {
    for (int i = 0; i < size; i++) {
        if (array[i] == num) {
            return true;
        }
    }
    return false;
}

// Function to perform multiple search operations
void performSearchOperations() {
    int array[10] = {1, 2, 3, 5, 8, 10, 12, 23, 28, 15};
    int num;
    
    for (int i = 1; i <= 2; i++) {
        cout << "Enter any digit: ";
        cin >> num;

        if (linearSearch(array, 10, num)) {
            cout << "Number found" << endl;
        } else {
            cout << "Number not found" << endl;
        }
    }
}

int main() {
    performSearchOperations();
    return 0;
}
