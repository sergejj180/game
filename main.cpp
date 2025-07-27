#include <iostream>

#include "Monster.h"

int main(int argc, char **argv) {
	std::cout << "Hello World" << std::endl;

	int length = 0;
	Monster *objectMonster[length];


/*	int *array = new int[length];*/

	objectMonster[0] = new Monster(1);
	objectMonster[1] = new Monster(2);
	objectMonster[2] = new Monster(3);
	objectMonster[3] = new Monster(1);
	objectMonster[4] = new Monster(2);


/*	objectMonster = new Monster(1);
	objectMonster = new Monster(2);
	objectMonster = new Monster(3); */

/*	std::cout << "start project" << std::endl; */

	delete objectMonster[length];
/*	delete[]array;
	array = nullptr; */

	objectMonster[length] = nullptr;

	return 0;
}
