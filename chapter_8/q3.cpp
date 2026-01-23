#include "Random.h"
#include <iostream>

bool handleGuess(int guess, int target) {
	if (guess == target) {
		std::cout << "Correct! You win!\n";
		return true;
	} else if (guess > target) {
		std::cout << "Your guess is too high.\n";
	} else {
		std::cout << "Your guess is too low.\n";
	}
	return false;
}

void playGame(int min, int max) {
	int target{Random::get(min, max)};

	std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";

	for (int i{1}; i <= 7; ++i) {
		std::cout << "Guess #" << i << ' ';
		int guess;
		std::cin >> guess;
		if (handleGuess(guess, target)) {
			return;
		}
	}

	std::cout << "Sorry, you lose. The correct number was 49.\n";
}

int main() {
	while (true) {
		playGame(1, 100);

		char input{' '};

		while (!(input == 'y' || input == 'n')) {
			std::cout << "Would you like to play again? (y/n) ";
			std::cin >> input;
		}

		if (input == 'n') {
			break;
		}

	}

	std::cout << "Thank you for playing.\n";
	return 0;
}
