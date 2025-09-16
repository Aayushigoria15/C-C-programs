#include <iostream.h>
#include <conio.h>
#include <stdlib.h>   
#include <time.h>     

int main() {
    clrscr();

    int number, guess;
    int attempts = 0;

    srand(time(0));            
    number = rand() % 100 + 1; 

    cout << "Guess a number between 1 and 100:\n";

    while (1) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess == number) {
            cout << " Congratulations! You guessed it in " << attempts << " attempts." << endl;
            break;
        }
        else if (guess > number) {
            cout << "Too high! Try again.\n";
        }
        else {
            cout << "Too low! Try again.\n";
        }
    }

    getch();
    return 0;
}
