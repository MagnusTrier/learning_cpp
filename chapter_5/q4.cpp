#include <iostream>
#include <string>
#include <string_view>

std::string getName(int person) {
	std::cout << "Enter the name of person #" << person << ": ";

	std::string name;
	std::getline(std::cin >> std::ws, name);

	return name;
}

int getAge(std::string_view name) {
	std::cout << "Enter the age of " << name << ": ";

	int age;
	std::cin >> age;

	return age;
}

void printStatement(std::string_view oldName, int oldAge, std::string_view youngName, int youngAge) {
	std::cout << oldName << " (age " << oldAge << ") is older than " << youngName << " (age " << youngAge << ").\n";
}

int main() {

	std::string p1Name{getName(1)};
	int p1Age{getAge(p1Name)};

	std::string p2Name{getName(2)};
	int p2Age{getAge(p2Name)};

	if (p1Age > p2Age) {
		printStatement(p1Name, p1Age, p2Name, p2Age);
	} else {
		printStatement(p2Name, p2Age, p1Name, p1Age);
	}

	return 0;
}
