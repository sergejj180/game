cmake_minimum_required(VERSION 3.10)

# Set some basic project attributes
project (game)

# This project will output an executable file
add_executable(${PROJECT_NAME} 

	"main.cpp"
	"Player.cpp" "Player.h"
	"Warrior.cpp" "Warrior.h"
	"Archer.cpp" "Archer.h" 
	"Mage.cpp" "Mage.h"
	
	"Monster.cpp" "Monster.h"
	
	"MonsterWarrior.cpp" "MonsterWarrior.h" 
	"MonsterArcher.cpp" "MonsterArcher.h"
	"MonsterMage.cpp" "MonsterMage.cpp")