#include <iostream>
#include <cstdlib>
#include <ctime> 

using namespace std;

int game(int generatednum) {
    srand(time(0)); 

    int guess;
    int attempts = 0;

    cout << "Let's play Number Guessing Game!\n";
    cout << "I have selected a number between 1 and 100. Can you find it?\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess == generatednum) {
            cout << "Congratulations! You guessed the number " << generatednum << " correctly!\n";
            cout << "Number of attempts: " << attempts << endl;
            break;
        } else if (guess < generatednum) {
            cout << "Too low! Try guessing a higher number.\n";
        } else {
            cout << "Too high! Try guessing a lower number.\n";
        }

    } while (true);
    return 0;
}
int main() {
    int generatednum= rand()%100 +1;
    game(generatednum);
}

