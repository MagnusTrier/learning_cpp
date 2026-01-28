#include <iostream>
#include <string>

class Ball {
  public:
	Ball(std::string color, double radius)
		: m_color{color}
		, m_radius{radius} {
	}

	const std::string &getColor() const {
		return m_color;
	}
	double getRadius() const {
		return m_radius;
	}

  private:
	std::string m_color{};
	double m_radius{};
};

void printBall(const Ball &b) {
	std::cout << "Ball(" << b.getColor() << ", " << b.getRadius() << ")\n";
}

int main() {
	Ball blue{"blue", 10.0};
	printBall(blue);

	Ball red{"red", 12.0};
	printBall(red);
	return 0;
}
