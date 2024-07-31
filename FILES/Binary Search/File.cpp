#include <iostream>
using namespace std;

int binarysearch(int array[5],int key)
{
    int start = 0, end = 5;
    while( start <= end){
        int middle = (start+end) / 2;

        if (array[middle] == key){
            return middle;
        }
        else if (array[middle] > key){
            end = middle - 1;
        }
        else if (array[middle] < key){
            start = middle + 1;
        }
        else{
            return -1;
        }
    }
    return -1;
}


int main()
{
    int array[5] = {1,2,3,4,5}, key;
    cout << "Enter the number to find in array : ";
    cin >> key;
    cout << "The index of " << key << " is " << binarysearch(array, key);
    return 0;
}
