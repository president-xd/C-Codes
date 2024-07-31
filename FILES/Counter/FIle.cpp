#include <iostream>
#include <conio.h>
using namespace std;
void Counter(){
    int count = 0;
    char input;
    cout << "Press 1 to counter" << endl;
    cout << "Press 0 to quit" << endl;
    cout << endl;
    cout << "Enter the number continuously : ";

    while (true)
    {
        input = getch();

        if (input == '1')
        {
            count += 1;
            cout << "Your counts are " << count << endl;
        }
        else if (input == '0')
        {
            break;
        }
    }

    cout << "-------------------------" << endl;
    cout << "Your counts are " << count << endl;
}
void banner(){
    cout << "--------------------------" << endl;
    cout << "          Counter         " << endl;
    cout << "--------------------------" << endl;
}

int main()
{
  
    banner();
    Counter();
  
    return 0;
}
