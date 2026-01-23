#include <iostream>

int accumulate(int num) {
	static int sum{0};
	sum += num;
	return sum;
}

int main() {
	std::cout << accumulate(4) << '\n';
	std::cout << accumulate(3) << '\n';
	std::cout << accumulate(2) << '\n';
	std::cout << accumulate(1) << '\n';
	return 0;
}
