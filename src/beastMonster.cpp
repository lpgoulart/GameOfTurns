/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#include "../libs/headers.hpp" 
#include "../libs/beastMonster.hpp"

	beastMonster::beastMonster () {

	}	

//--------------------------------------------------------------------
//	Rage
	
	void beastMonster::setRage ( int power ) {
		this->rage = power;
	}

	int beastMonster::getRage () {
		return this->rage;
	}

	int beastMonster::useRage () {
		return this->rage += 4;
	}


//--------------------------------------------------------------------

//--------------------------------------------------------------------
// atk

	int beastMonster::frenesi ( int enemyLife, int damage ) {
		return enemyLife - damage;
	}

//--------------------------------------------------------------------
