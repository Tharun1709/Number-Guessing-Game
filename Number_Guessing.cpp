#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

using namespace std;

int main() {
    // Initialize random seed
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int guess;
    int numberOfAttempts = 0;

    cout << "Welcome to the Guessing Game!" << endl;
    cout << "I have generated a random number between 1 and 100." << endl;
    cout << "Try to guess the number!" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        numberOfAttempts++;

        if (guess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number!" << endl;
            cout << "It took you " << numberOfAttempts << " attempts to guess the number." << endl;
        }
    } while (guess != randomNumber);

    return 0;
}
