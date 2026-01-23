#include <iostream>

int main() {

	int i{1};
	while (i <= 5) {

		int j{5};
		while (j > 0) {
			if (j > i) {
				std::cout << "X ";
			} else {
				std::cout << j << ' ';
			}
			--j;
		}

		++i;
		std::cout << '\n';
	}

	return 0;
}
