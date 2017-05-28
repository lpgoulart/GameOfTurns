/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#include "../libs/headers.hpp"
#include "../libs/MonsterType.hpp"

//--------------------------------------------------------------------
// sets and gets

	void MonsterType::setName ( std::string Name ) {
		this->name = Name;
	}

	std::string MonsterType::getName () {
		return this->name;
	}

	void MonsterType::setLife ( int hp ) {
		this->life = hp;
	}

	int MonsterType::getLife () {
		return this->life;
	} 

	void MonsterType::setPassive ( int pass ) {
		this->passive = pass;
	}

	int MonsterType::getPassive () {
		return this->passive;
	}

	void MonsterType::setFirstDmg ( int fDmg) {
		this->firstDmg = fDmg;
	}

	int MonsterType::getFirstDmg () {
		return this->firstDmg;
	}

	void MonsterType::setSecondDmg ( int sDmg ) {
		this->secondDmg = sDmg;
	}

	int MonsterType::getSecondDmg () {
		return this->secondDmg;
	}
//--------------------------------------------------------------------