#include "Random.h"
#include <iostream>
#include <string>
#include <string_view>

class Monster {
  public:
	enum Type {
		dragon,
		ogre,
		orc,
		skeleton,
		troll,
		vampire,
		zombie,
		maxMonsterTypes,
	};

	Monster(Type type, std::string_view name, std::string_view roar, int health)
		: m_type{type}
		, m_name{name}
		, m_roar{roar}
		, m_health{health} {
	}

	void print() const {
		std::cout << m_name << " the " << getTypeString();
		if (m_health <= 0) {
			std::cout << " is dead.\n";
		} else {
			std::cout << " has " << m_health << " hit points and says " << m_roar << ".\n";
		}
	}

  private:
	Type m_type{};
	std::string m_name{"???"};
	std::string m_roar{"???"};
	int m_health{};

	constexpr std::string_view getTypeString() const {
		switch (m_type) {
		case dragon:
			return "dragon";
		case ogre:
			return "ogre";
		case orc:
			return "orc";
		case skeleton:
			return "skeleton";
		case troll:
			return "troll";
		case vampire:
			return "vampire";
		case zombie:
			return "zombie";
		default:
			return "???";
		}
	}
};

namespace MonsterGenerator {

constexpr std::string_view getName(int i) {
	switch (i) {
	case 0:
		return "Ding";
	case 1:
		return "Dong";
	case 2:
		return "Mann";
	case 3:
		return "Whop";
	case 4:
		return "Dingle";
	case 5:
		return "Dongle";
	default:
		return "Unknown";
	}
}

constexpr std::string_view getRoar(int i) {
	switch (i) {
	case 0:
		return "*reee*";
	case 1:
		return "*awawa*";
	case 2:
		return "*uwu*";
	case 3:
		return "*derrere*";
	case 4:
		return "*ahhhhh*";
	case 5:
		return "*flgji*";
	default:
		return "*unknown*";
	}
}

Monster generate() {
	return Monster{
		static_cast<Monster::Type>(Random::get(0, Monster::maxMonsterTypes - 1)),
		getName(Random::get(0, 5)), 
		getRoar(Random::get(0, 5)), 
		Random::get(0, 100)
	};
}
} // namespace MonsterGenerator

int main() {
	Monster m{MonsterGenerator::generate()};
	m.print();

	return 0;
}
