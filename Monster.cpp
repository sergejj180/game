/*
 * Monster.cpp
 *
 *  Created on: 27 июл. 2025 г.
 *      Author: sergejj180
 */

#include <iostream>

#include "Monster.h"
#include "MonsterWarrior.h"
#include "MonsterArcher.h"
#include "MonsterMage.h"

Monster::Monster() {
	// TODO Auto-generated constructor stub
	std::cout << "Create new Monster ! ! !" << std::endl;
}

Monster::Monster(int id){

	switch (id) {

	case 1:
		new MonsterWarrior();
		break;
	case 2:
		new MonsterArcher();
		break;
	case 3:
		new MonsterMage();
		break;
	}

}

Monster::~Monster() {
	// TODO Auto-generated destructor stub
}

