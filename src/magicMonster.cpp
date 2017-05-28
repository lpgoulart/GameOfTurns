/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#include "../libs/headers.hpp"
#include "../libs/magicMonster.hpp"

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

	//void magicMonster::useKnowledge () {
	//	this->damage += 3;
	//}
//--------------------------------------------------------------------
/*
//--------------------------------------------------------------------
//	fireball 


	void magicMonster::fireBall ( beastMonster* giant ) {
		int life = giant->getLife();
		life -= this->damage;

		giant->setLife ( life );
	}	

	void magicMonster::fireBall ( magicMonster* wizard ) {
		int life = wizard->getLife();
		life -= this->damage;

		wizard->setLife ( life );
	}

	void magicMonster::fireBall ( wingedMonster* holy ) {
		int life = holy->getLife();
		life -= this->damage;

		holy->setLife ( life );
	}
//--------------------------------------------------------------------

//--------------------------------------------------------------------
//	firestorm 


	void magicMonster::fireStorm ( beastMonster* giant ) {
		int life = giant->getLife();
		life -= this->damage;

		giant->setLife ( life );
	}	

	void magicMonster::fireStorm ( magicMonster* wizard ) {
		int life = wizard->getLife();
		life -= this->damage;

		wizard->setLife ( life );
	}

	void magicMonster::fireStorm ( wingedMonster* holy ) {
		int life = holy->getLife();
		life -= this->damage;

		holy->setLife ( life );
	}
//--------------------------------------------------------------------
*/
