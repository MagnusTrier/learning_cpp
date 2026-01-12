#include <iostream>

double getHeight() {
	std::cout << "Enter the height of the tower in meters: ";
	double height{};
	std::cin >> height;
	return height;
}

void simulateFall(double height) {
	double gravity{9.8};
	for (int i{0}; i <= 5; i++) {
		double fallen{gravity * i * i / 2.0};
		std::cout << "At " << i << " seconds, the ball is ";

		if (height - fallen > 0) {
			std::cout << "at height: " << height - fallen << " meters\n";
		} else {
			std::cout << "on the ground\n";
		}
	}
}

int main() {
	double height{getHeight()};
	simulateFall(height);
	return 0;
}
