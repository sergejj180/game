/*
 * MonsterMage.h
 *
 *  Created on: 27 июл. 2025 г.
 *      Author: sergejj180
 */

#ifndef MONSTERMAGE_H_
#define MONSTERMAGE_H_

#include "Mage.h"
#include "Monster.h"

class MonsterMage: public Mage , public Monster {
public:
	MonsterMage();
	virtual ~MonsterMage();
};

#endif /* MONSTERMAGE_H_ */
