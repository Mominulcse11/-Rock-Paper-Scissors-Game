#include<iostream>
#include<ctime>
using namespace std;

char playerchoice();
char computerchoice();
void showchoice(char choice);
void winner(char player, char computer);

int main() {
    char player;
    char computer;
    char playAgain;

    do {
        player = playerchoice();
        cout << "player choice = ";
        showchoice(player);

        computer = computerchoice();
        cout << "computer's choice = ";
        showchoice(computer);

        winner(player, computer);

        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;
        cout << "------------------------------\n";
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing!\n";
    return 0;
}

char playerchoice() {
    char playe;
    cout << "Rock Paper Scissor Game \n";
    do {
        cout << "Choose one of the following\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "r for ROCK\n";
        cout << "p for PAPER\n";
        cout << "s for SCISSOR\n";
        cin >> playe;
    } while (playe != 'r' && playe != 'p' && playe != 's');

    return playe;
}

char computerchoice() {
    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num) {
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }

    return 0;
}

void showchoice(char choice) {
    switch (choice) {
        case 'r':
            cout << "Rock\n";
            break;
        case 'p':
            cout << "Paper\n";
            break;
        case 's':
            cout << "Scissor\n";
            break;
        default:
            cout << "Bhalo hoe jao Masud\n";
            break;
    }
}

void winner(char user, char computer) {
    switch (user) {
        case 'r':
            if (computer == 'r') {
                cout << "tie";
            } else if (computer == 'p') {
                cout << "lose";
            } else {
                cout << "win";
            }
            break;

        case 'p':
            if (computer == 'r') {
                cout << "win";
            } else if (computer == 'p') {
                cout << "tie";
            } else {
                cout << "lose";
            }
            break;

        case 's':
            if (computer == 'r') {
                cout << "lose";
            } else if (computer == 'p') {
                cout << "win";
            } else {
                cout << "tie";
            }
            break;
    }
}
