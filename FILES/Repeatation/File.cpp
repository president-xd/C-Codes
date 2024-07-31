#include <iostream>
using namespace std;
/*
Write a program that will ask user with four possible answers. 
The question should be asked 5 times. After the input is gathered, 
the program should output the number of times each question was selected.
*/
// Function to display the menu
void displayMenu() {
    cout << "Enter the number of desired question" << endl;
    cout << "Press 1 for question 1" << endl;
    cout << "Press 2 for question 2" << endl;
    cout << "Press 3 for question 3" << endl;
    cout << "Press 4 for question 4" << endl;
    cout << endl;
}

// Function to count the number of times each question is selected
void countQuestions(int& ques1, int& ques2, int& ques3, int& ques4, int numQuestions) {
    int num;
    for (int i = 1; i <= numQuestions; i++) {
        cout << "Enter number of Question = ";
        cin >> num;
        switch (num) {
            case 1:
                ques1++;
                break;
            case 2:
                ques2++;
                break;
            case 3:
                ques3++;
                break;
            case 4:
                ques4++;
                break;
            default:
                cout << "Invalid Entry" << endl;
                break;
        }
    }
}

// Function to display the results
void displayResults(int ques1, int ques2, int ques3, int ques4) {
    cout << "Number of times you entered question 1 is " << ques1 << endl;
    cout << "Number of times you entered question 2 is " << ques2 << endl;
    cout << "Number of times you entered question 3 is " << ques3 << endl;
    cout << "Number of times you entered question 4 is " << ques4 << endl;
}

int main() {
    int ques1 = 0, ques2 = 0, ques3 = 0, ques4 = 0;
    const int numQuestions = 5;

    displayMenu();
    countQuestions(ques1, ques2, ques3, ques4, numQuestions);
    displayResults(ques1, ques2, ques3, ques4);

    return 0;
}
