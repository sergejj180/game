/*
 * Monster.h
 *
 *  Created on: 27 июл. 2025 г.
 *      Author: sergejj180
 */

#ifndef MONSTER_H_
#define MONSTER_H_

class Monster {
private:
	int id;
public:
	Monster();
	Monster(int id);
	virtual ~Monster();
};

#endif /* MONSTER_H_ */
