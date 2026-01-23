#include "Random.h"
#include <iostream>
#include <limits>

namespace Constants {
constexpr int guesses{7};
constexpr int rangeMin{1};
constexpr int rangeMax{100};
} // namespace Constants

void ignoreLine() { std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); }

bool clearFailedExtraction() {
	if (!std::cin) {
		if (std::cin.eof()) {
			std::exit(0);
		}

		std::cin.clear();
		ignoreLine();

		return true;
	}
	return false;
}

int getGuess(int nGuess) {
	std::cout << "Guess #" << nGuess << ' ';

	int guess{0};
	while (true) {
		std::cin >> guess;
		clearFailedExtraction();
		if (guess >= Constants::rangeMin && guess <= Constants::rangeMax) {
			return guess;
		}
		std::cout << "Please enter an guess between " << Constants::rangeMin << " and " << Constants::rangeMax << ": ";
	}
}

void playRound() {
	int target{Random::get(Constants::rangeMin, Constants::rangeMax)};
	for (int i{1}; i <= Constants::guesses; ++i) {
		int guess{getGuess(i)};
		if (guess == target) {
			std::cout << "Correct! You win!\n";
			return;
		}

		std::cout << "Your guess it too " << ((guess > target) ? "high" : "low") << ".\n";
	}
	std::cout << "Sorry, you lose. The correct number was " << target << '\n';
}

bool getEndOfGameAction() {
	char input{' '};
	while (true) {
		std::cout << "Would you like to play again? (y/n) ";
		std::cin >> input;
		clearFailedExtraction();

		switch (input) {
		case 'y':
			return true;
		case 'n':
			return false;
		default:
			std::cout << "Invalid character, enter y or n to proceed. ";
		}
	}
}

void playGame() {
	while (true) {
		std::cout << "Let's play a game. I'm thinking of a number between " << Constants::rangeMin << " and "
				  << Constants::rangeMax << ". You have " << Constants::guesses << " tries to guess what it is.\n";
		playRound();
		if (!getEndOfGameAction()) {
			break;
		}
	}
	std::cout << "Thank you for playing.\n";
}

int main() {
	playGame();
	return 0;
}
