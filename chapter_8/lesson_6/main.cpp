#include <iostream>

void calculate(int num1, int num2, char op) {
	int result{};
	switch (op) {
	case '+':
		result = num1 + num1;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		result = num1 / num2;
		break;
	case '%':
		result = num1 % num2;
		break;
	default:
		std::cout << "Error: Invalid operator\n";
		return;
	}

	std::cout << "Result: " << result << '\n';
}

int main() {
	std::cout << "Enter an integer: ";
	int num1;
	std::cin >> num1;

	std::cout << "Enter another integer: ";
tryAgain:
	int num2;
	std::cin >> num2;

	if (!num2) {
		std::cout << "Please enter a non zero integer: ";
		goto tryAgain;
	}

	std::cout << "Enter operation (+, -, *, /, %): ";
	char op;
	std::cin >> op;

	calculate(num1, num2, op);

	return 0;
}
