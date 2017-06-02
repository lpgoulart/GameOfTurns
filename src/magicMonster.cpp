/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#include "../libs/headers.hpp"
#include "../libs/magicMonster.hpp"


	magicMonster::magicMonster () {

	}

//--------------------------------------------------------------------
//	gets and sets
	void magicMonster::setKnowledge ( int know ) {
		this->knowledge = know;
	}

	int magicMonster::getKnowledge () {
		return this->knowledge;
	}
//--------------------------------------------------------------------

//--------------------------------------------------------------------
//	knowledge - atk + 3

	int magicMonster::useKnowledge () {
		return this->knowledge += 3;
	}
//--------------------------------------------------------------------

//--------------------------------------------------------------------
//	spell 

	int magicMonster::Spell ( int enemyLife, int damage ) {
		return enemyLife - damage;
	}
//--------------------------------------------------------------------

