#include <iostream>

#include "Monster.h"
#include "MonsterWarrior.h"
#include "MonsterArcher.h"
#include "MonsterMage.h"

int main(int argc, char **argv) {
	std::cout << "Hello World" << std::endl;

	int length = 0;
	Monster *objectMonster[length];


/*	int *array = new int[length];*/

	objectMonster[0] = new MonsterWarrior();
	objectMonster[1] = new MonsterMage();
	objectMonster[2] = new MonsterArcher();
	objectMonster[3] = new MonsterMage();
	objectMonster[4] = new MonsterWarrior();


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
