#include<iostream>

using namespace std;

int main (){
    cout << "********************************" << endl;
    cout << "* Welcome to the guessing game *" << endl;
    cout << "********************************" << endl;

    const int SECRET_NUMBER = 42;
    int choice;

    cout << "What's your choice?";
    cin >> choice;

    cout << "The value of your choice is: " << choice << endl;

    bool correct_value = choice == SECRET_NUMBER;
    bool more_than_value = choice > SECRET_NUMBER;

    if(correct_value) {
        cout << "Congrats! You choice a correct number!" << endl;
    }
    else if(more_than_value) {
        cout << "Your choice is more than secret number!" << endl;
    }
    else {
        cout << "Your choice is less than secret number!" << endl;
    }
}