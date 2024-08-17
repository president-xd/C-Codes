#include <iostream>
using namespace std;
/*
Write a function named “concentrate” that copies the cells of one array into
a larger array, and then
Copies the cells of another array into larger array just beyond the contents of the
first array.
The contents of the cells will be integers. The argument will be as follows:
1. The first array that will be copied:
2. The number of cells that will be copied from the first array:
3. The second array that will be copied:
4. The number of cells that will be copied from the second array:
5. The larger array into which all copying will be performed:
6. The number of cells available in the larger array.
If the function discovers that the number of cells in the large array is not larger
enough to hold all the numbers to be copied into it, then the function should
return 0 to indicate failure. Otherwise, it should return 1. The function should not
alter the contents of the first two arrays. To take an example, if the first two
arrays passed to the function look like this:
*/  
int concentrate(int arr1[], int n1, int arr2[], int n2, int large[], int n_large) {
    if (n1 + n2 > n_large) {
        return 0;
    }

    for (int i = 0; i < n1; i++) {
        large[i] = arr1[i];
    }

    for (int i = 0; i < n2; i++) {
        large[i + n1] = arr2[i];
    }

    return 1;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {23, 14, 25, 89};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {5, 6, 7, 8};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int large[10];
    int n_large = sizeof(large) / sizeof(large[0]);

    int result = concentrate(arr1, n1, arr2, n2, large, n_large);

    if (result == 1) {
        cout << "The large array after copying is: " << endl;
        printArray(large, n1 + n2);
    } else {
        cout << "Error: The destination array is not large enough." << endl;
    }

    return 0;
}
