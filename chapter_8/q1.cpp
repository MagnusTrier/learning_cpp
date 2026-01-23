#include <iostream>

namespace Constants {
constexpr double gravity{9.8};
}

double getTowerHeight() {
	std::cout << "Enter the height of the tower in meters: ";
	double towerHeight{};
	std::cin >> towerHeight;
	return towerHeight;
}

double calculateBallHeight(double towerHeight, int seconds) {

	const double fallDistance{Constants::gravity * (seconds * seconds) / 2.0};
	const double ballHeight{towerHeight - fallDistance};

	if (ballHeight < 0.0)
		return 0.0;

	return ballHeight;
}

void printBallHeight(double ballHeight, int seconds) {
	if (ballHeight > 0.0)
		std::cout << "At " << seconds
				  << " seconds, the ball is at height: " << ballHeight
				  << " meters\n";
	else
		std::cout << "At " << seconds
				  << " seconds, the ball is on the ground.\n";
}

int main() {
	const double towerHeight{getTowerHeight()};

	int i{0};
	while (true) {
		double th{calculateBallHeight(towerHeight, i)};
		printBallHeight(th, i);
		if (th <= 0) {
			break;
		}
		++i;
	}
	return 0;
}
