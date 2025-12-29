#include <iostream>
#include "io.h"

int readNumber() {
	std::cout << "Enter an integer: ";
	int num{};
	std::cin >> num;
	return num;
}

void writeAnswer(int num) {
	std::cout << "The result is: " << num << '\n';
}
