#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator with the current time
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;

    int guess;
    int attempts = 0;
    int maxAttempts = 10;

    std::cout << "Welcome to the Random Number Game!" << std::endl;
    std::cout << "I'm thinking of a number between 1 and 100." << std::endl;

    while (attempts < maxAttempts) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > secretNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You've guessed the number in " << attempts << " attempts." << std::endl;
            break;
        }
    }

    if (attempts == maxAttempts) {
        std::cout << "Sorry, you've run out of attempts. The secret number was " << secretNumber << "." << std::endl;
    }

    return 0;
}
