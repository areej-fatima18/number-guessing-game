// Number guessing game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator
    int target = rand() % 100 + 1; // Random number between 1 and 100
    int guess;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I'm thinking of a number between 1 and 100. Can you guess it?" << std::endl;

    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess > target) {
            std::cout << "Too high! Try again." << std::endl;
        }
        else if (guess < target) {
            std::cout << "Too low! Try again." << std::endl;
        }
        else {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts." << std::endl;
            break;
        }
    }

    return 0;
}


