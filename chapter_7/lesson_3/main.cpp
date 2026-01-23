#include <iostream>

namespace Print {

void printResult(int smaller, int larger) {
	std::cout << "The smaller value is " << smaller << '\n';
	std::cout << "The larger value is " << larger << '\n';
}

} // namespace Print

int main() {
	int smaller;
	std::cout << "Enter an integer: ";
	std::cin >> smaller;

	int larger;
	std::cout << "Enter a larger integer: ";
	std::cin >> larger;

	if (smaller > larger) {
		std::cout << "Swapping the values\n";
		int temp{smaller};
		smaller = larger;
		larger = temp;
	} // temp dies
	
	Print::printResult(smaller, larger);
	

	return 0;
} // smaller dies, larger dies
