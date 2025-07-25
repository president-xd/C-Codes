#include <iostream>
using namespace std;

int main() {
    int num = 5;
    for (int i = 1; i < num; i++){
        for (int j = num - i; j >= 1; j--){
            cout << " ";
        }
        
        for (int k = 1; k <= i; k++){
            cout << k;
        }
        
        cout << endl;

    }
    return 0;
}
