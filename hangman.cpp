#include <iostream>
#include <string>
#include <map>

using namespace std;

const string SECRET = "WATERMELON";
map<char, bool> already_choice;

bool check_if_choice_exists(char choice) {
    for(char letter : SECRET) {
        if (letter == choice) {
            return true;
        }
    }
    return false;
}

int main() {
    bool incorrect = true;
    bool hanged = true;

    while(incorrect && hanged) {
        for (char letter : SECRET) {
            if (already_choice[letter]) {
                cout << letter << " ";
            } else {
                cout << "_ ";
            }
        }
        cout << endl;

        char choice;
        cin >> choice;

        already_choice[choice] = true;

        if (check_if_choice_exists(choice)) {
            cout << "Correct! you're right" << endl;
        } else {
            cout << "Wrong! you didn't get it right" << endl;
        }
    }
}