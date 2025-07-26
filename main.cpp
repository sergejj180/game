#include <iostream>

#include "Monster.h"

int main(int argc, char **argv) {
	std::cout << "Hello World" << std::endl;

	Monster *objectMonster;

	objectMonster = new Monster(1);
	objectMonster = new Monster(2);
	objectMonster = new Monster(3);

	std::cout << "start project" << std::endl;

	delete objectMonster;

	objectMonster = nullptr;

	return 0;
}
