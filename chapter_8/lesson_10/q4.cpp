#include <iostream>

void fizzbuzz(int target) {
	for (int i{1}; i <= target; ++i) {

		bool c3{i % 3 == 0};
		bool c5{i % 5 == 0};
		bool c7{i % 7 == 0};

		if (i % 3 == 0) {
			std::cout << "fizz";
		}

		if (i % 5 == 0) {
			std::cout << "buzz";
		}

		if (i % 7 == 0) {
			std::cout << "pop";
		}

		if (!(c3 || c5 || c7)) {
			std::cout << i;
		}

		std::cout << '\n';
	}
}

int main() {
	fizzbuzz(150);
	return 0;
}
