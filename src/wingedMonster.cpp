/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#include "../libs/headers.hpp"
#include "../libs/wingedMonster.hpp"

//--------------------------------------------------------------------
//	gets and sets
	void wingedMonster::setAgility ( int agi ) {
		this->speed = agi;
	}

	int wingedMonster::getAgility () {
		return this->speed;
	}
//--------------------------------------------------------------------

//--------------------------------------------------------------------
//	agility -> speed + 3

	int wingedMonster::useAgility () {
		return this->speed += 3;
	}
//--------------------------------------------------------------------

//--------------------------------------------------------------------
//	Holy Atk 

	int wingedMonster::holyAtk ( int life, int damage ) {
		return life - damage;
	}

//--------------------------------------------------------------------

//--------------------------------------------------------------------
//	hand of god 


	int wingedMonster::divineAtk ( int life, int damage ) {
		return life - damage;
	}	

//--------------------------------------------------------------------

