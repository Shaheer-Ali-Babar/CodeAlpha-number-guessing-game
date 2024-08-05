#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void playGame() {
    srand(time(0)); // Seed the random number generator
    int numberToGuess = rand() % 100 + 1; // Random number between 1 and 100
    int playerGuess = 0;
    int numberOfGuesses = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100. Can you guess it?" << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> playerGuess;
        numberOfGuesses++;

        if (playerGuess == numberToGuess) {
            cout << "Congratulations! You guessed the correct number in " << numberOfGuesses << " attempts." << endl;
            break;
        }
        else if (playerGuess < numberToGuess) {
            cout << "Too low! Try again." << endl;
        }
        else {
            cout << "Too high! Try again." << endl;
        }
    }
}

int main() {
    char playAgain;

    do {
        playGame();
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thank you for playing the Number Guessing Game!" << endl;
    return 0;
}
