/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#include "../libs/headers.hpp"
#include "../libs/monster.hpp"

//--------------------------------------------------------------------
// gets e sets

	void Monster::setName ( std::string Name ) {
		this->name = Name;
	}

	std::string Monster::getName () {
		return this->name;
	}

	void Monster::setLife ( int hp ) {
		this->life = hp;
	}

	int Monster::getLife () {
		return this->life;
	}

	void Monster::setStrength ( int str ) {
		this->strength = str;
	}

	int Monster::getStrength () {
		return this->strength;
	}

	void Monster::setSpirit ( int inteligence ) {
		this->spirit = inteligence;
	}

	int Monster::getSpirit () {
		return this->spirit;
	}

	void Monster::setVitality ( int vit ) {
		this->vitality = vit;
	}

	int Monster::getVitality () {
		return this->vitality;
	}

	void Monster::setDamage ( int dmg ) {
		this->damage = dmg;
	}

	int Monster::getDamage () {
		return this->damage;
	}

	void Monster::setFstDmg ( int dmg ) {
		this->FstDmg = dmg;
	}

	int Monster::getFstDmg () {
		return this->FstDmg;
	}

	void Monster::setSecDmg ( int dmg ) {
		this->SecDmg = dmg;
	}

	int Monster::getSecDmg () {
		return this->SecDmg;
	}
//--------------------------------------------------------------------

