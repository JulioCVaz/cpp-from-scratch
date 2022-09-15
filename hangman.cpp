#include <iostream>
#include <string>
using namespace std;

const string SECRETE_WORD = "WATERMELON";

bool check_if_choice_exists(char choice) {
    for(int i = 0; i < SECRETE_WORD.size(); i++) {
        if (choice == SECRETE_WORD[i]){
            return true;
        }
    }
    return false;
}

int main() {
    cout << SECRETE_WORD << endl;

    bool incorrect = true;
    bool hanged = true;

    while(incorrect && hanged) {
        char choice;
        cin >> choice;

        if (check_if_choice_exists(choice)) {
            cout << "Correct! you're right" << endl;
        } else {
            cout << "Wrong! you didn't get it right" << endl;
        }
    }
}