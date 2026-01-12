#include <iostream>

int main() {
	std::cout << "Enter a single character: ";
	char character{};
	std::cin >> character;
	std::cout << "You entered '" << character << "', which has ASCII code " << static_cast<int>(character) << '\n';
	return 0;
}
