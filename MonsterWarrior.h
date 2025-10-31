/*
 * MonsterWarrior.h
 *
 *  Created on: 27 июл. 2025 г.
 *      Author: sergejj180
 */

#ifndef MONSTERWARRIOR_H_
#define MONSTERWARRIOR_H_

#include "Warrior.h"
#include "Monster.h"

class MonsterWarrior: public Warrior , public Monster {
public:
	MonsterWarrior();
	virtual ~MonsterWarrior();
};

#endif /* MONSTERWARRIOR_H_ */
