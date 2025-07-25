#include <iostream>
using namespace std;

int main() {
    int n = 4;

    // Upper part of the pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = i; j < 2 * i; j++)
            cout << j;
        for (int j = 2 * i - 2; j >= i; j--)
            cout << j;
        cout << endl;
    }

    // Lower part of the pattern
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = i; j < 2 * i; j++)
            cout << j;
        for (int j = 2 * i - 2; j >= i; j--)
            cout << j;
        cout << endl;
    }

    return 0;
}
