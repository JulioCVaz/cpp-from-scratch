#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

const string SECRET = "WATERMELON";
map<char, bool> already_choice;
vector<char> wrong_choices;

bool check_if_choice_exists(char choice) {
    for(char letter : SECRET) {
        if (letter == choice) {
            return true;
        }
    }
    return false;
}

bool check_if_got_it_right(){
    for (char letter: SECRET) {
        if (!already_choice[letter]){
            return true;
        }
    }
    return false;
}

bool check_if_not_hanged() {
    return wrong_choices.size() < 5;
}

void print_header() {
    cout << "*******************" << endl;
    cout << "***** hangman *****" << endl;
    cout << "*******************" << endl;
    cout << endl;
}

void print_errors() {
    cout << "Wrong choices" << endl;

    for (char letter : wrong_choices) {
        cout << letter << " ";
    }
    cout << endl;
}

void print_current_word() {
    for (char letter : SECRET) {
            if (already_choice[letter]) {
                cout << letter << " ";
            } else {
                cout << "_ ";
            }
        }
        cout << endl;
}

void print_endgame(){
    cout << "end game!" << endl;
    cout << "The secret word is : " << SECRET << endl;

    if(check_if_got_it_right()) {
        cout << "Try again! You lose!" << endl;
    } else {
        cout << "Congrats! You win!" << endl;
    }
}

void check_choice() {
    cout << "Your choice is: ";
    char choice;
    cin >> choice;

    already_choice[choice] = true;

    if (check_if_choice_exists(choice)) {
        cout << "Correct! you're right" << endl;
    } else {
        cout << "Wrong! you didn't get it right" << endl;
        wrong_choices.push_back(choice);
    }
    cout << endl;
}

int main() {
    print_header();

    while(check_if_got_it_right() && check_if_not_hanged()) {
        print_errors();
        print_current_word();
        check_choice();
    }

    print_endgame();    
}