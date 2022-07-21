#include<iostream>

using namespace std;

int main (){
    cout << "********************************" << endl;
    cout << "* Welcome to the guessing game *" << endl;
    cout << "********************************" << endl;

    cout << "Choose the difficulty level" << endl;
    cout << "easy(E), medium(M) or hard(H)" << endl;

    char difficulty;
    int attempts = 0;

    cin >> difficulty;

    if (difficulty == 'E') {
        attempts = 15;
    }
    else if (difficulty == 'M') {
        attempts = 10;
    } else {
        attempts = 5;
    }

    const int SECRET_NUMBER = 42;

    bool not_guessed = true;
    

    double score = 1000.0;

    for (int number_of_attempts=0; attempts < number_of_attempts; attempts++) {
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
            break;
        }
        else if(more_than_value) {
            cout << "Your choice is more than secret number!" << endl;
        }
        else {
            cout << "Your choice is less than secret number!" << endl;
        }
    }
    cout << "end game!" << endl;
    if (not_guessed) {
        cout << "You lose, try again!" << endl;
    }
    else {
        cout << "You guessed it in " << attempts << " attempts" << endl;
        cout.precision(2);
        cout << fixed;
        cout << "Your score is " << score << endl;
    }
}