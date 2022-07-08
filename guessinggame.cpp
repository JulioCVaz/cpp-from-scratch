#include<iostream>

using namespace std;

int main (){
    cout << "********************************" << endl;
    cout << "* Welcome to the guessing game *" << endl;
    cout << "********************************" << endl;

    int secret_number = 42;
    int choice;

    cout << "What's your choice?";
    cin >> choice;

    cout << "The value of your choice is: " << choice << endl;

    if(choice == secret_number) {
        cout << "Congrats! You choice a correct number!" << endl;
    }
    else if(choice > secret_number) {
        cout << "Your choice is more than secret number!" << endl;
    }
    else {
        cout << "Your choice is less than secret number!" << endl;
    }
}