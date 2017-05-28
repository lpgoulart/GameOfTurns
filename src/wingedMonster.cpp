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
		this->agility = agi;
	}

	int wingedMonster::getAgility () {
		return this->agility;
	}

	void wingedMonster::setSpeed ( int velocity ) {
		this->speed = velocity;
	}

	int wingedMonster::getSpeed () {
		return this->speed;
	}
//--------------------------------------------------------------------

//--------------------------------------------------------------------
//	agility -> speed + 3

	void wingedMonster::useAgility () {
		this->speed += 3;
	}
//--------------------------------------------------------------------
/*
//--------------------------------------------------------------------
//	holy spear 


	void wingedMonster::holySpear ( beastMonster* giant ) {
		int life = giant->getLife();
		life -= this->damage;

		giant->setLife ( life );
	}	

	void wingedMonster::holySpear ( magicMonster* wizard ) {
		int life = wizard->getLife();
		life -= this->damage;

		wizard->setLife ( life );
	}

	void wingedMonster::holySpear ( wingedMonster* holy ) {
		int life = holy->getLife();
		life -= this->damage;

		holy->setLife ( life );
	}
//--------------------------------------------------------------------

//--------------------------------------------------------------------
//	hand of god 


	void wingedMonster::handOfGod ( beastMonster* giant ) {
		int life = giant->getLife();
		life -= this->damage;

		giant->setLife ( life );
	}	

	void wingedMonster::handOfGod ( magicMonster* wizard ) {
		int life = wizard->getLife();
		life -= this->damage;

		wizard->setLife ( life );
	}

	void wingedMonster::handOfGod ( wingedMonster* holy ) {
		int life = holy->getLife();
		life -= this->damage;

		holy->setLife ( life );
	}
//--------------------------------------------------------------------
*/
