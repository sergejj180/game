/*
 * MonsterArcher.h
 *
 *  Created on: 27 июл. 2025 г.
 *      Author: sergejj180
 */

#ifndef MONSTERARCHER_H_
#define MONSTERARCHER_H_

#include "Archer.h"
#include "Monster.h"

class MonsterArcher: public Archer ,public Monster {
public:
	MonsterArcher();
	virtual ~MonsterArcher();
};

#endif /* MONSTERARCHER_H_ */
