#include <iostream>

double getResult(double num1, double num2, char op) {
	double result{};

	if (op == '+') {
		result = num1 + num2;
	} else if (op == '-') {
		result = num1 - num2;
	} else if (op == '*') {
		result = num1 * num2;
	} else if (op == '/') {
		result = num1/num2;
	}
	return result;
}

int main() {
	std::cout << "Enter a double value: ";
	double num1{};
	std::cin >> num1;

	std::cout << "Enter a double value: ";
	double num2{};
	std::cin >> num2;

	std::cout << "Enter +, -, *, or /: ";
	char op{};
	std::cin >> op;

	double result{getResult(num1, num2, op)};
	std::cout << num1 << op << num2 << " is " << result << '\n';
	return 0;
}
