#include<iostream>

using namespace std;

int main (){
    cout << "********************************" << endl;
    cout << "* Welcome to the guessing game *" << endl;
    cout << "********************************" << endl;

    const int SECRET_NUMBER = 42;

    bool not_guessed = true;
    int attempts = 0;

    double score = 1000.0;

    while(not_guessed) {
        attempts++;
        int choice;

        cout << "attempt " << attempts << endl;
        cout << "What's your choice?";
        cin >> choice;

        double decrease_score = abs(choice - SECRET_NUMBER) / 2.0;
        score = score - decrease_score;

        cout << "The value of your choice is: " << choice << endl;

        bool guessed = choice == SECRET_NUMBER;
        bool more_than_value = choice > SECRET_NUMBER;

        if(guessed) {
            cout << "Congrats! You choice an correct number!" << endl;
            not_guessed = false;
        }
        else if(more_than_value) {
            cout << "Your choice is more than secret number!" << endl;
        }
        else {
            cout << "Your choice is less than secret number!" << endl;
        }
    }
    cout << "end game!" << endl;
    cout << "You guessed it in " << attempts << " attempts" << endl;
    cout.precision(2);
    cout << fixed;
    cout << "Your score is " << score << endl;
}