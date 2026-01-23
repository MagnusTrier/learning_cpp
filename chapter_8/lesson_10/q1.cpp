#include <iostream>

int sumTo(int target) {
	int sum{0};

	for (int i{1}; i <= target; ++i) {
		sum += i;
	}

	return sum;
}

int main() {
	for (int i{0}; i <= 20; ++i) {
		std::cout << i << '\n';
	}

	std::cout << "Sum to 5: " << sumTo(5) << '\n';
	return 0;
}
