/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#include "../libs/headers.hpp"
#include "../libs/MonsterType.hpp"

//--------------------------------------------------------------------
// sets and gets

	void MonsterType::setType ( std::string Type ) {
		this->type = Type;
	}

	std::string MonsterType::getType () {
		return this->type;
	}

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

//--------------------------------------------------------------------
// Constructor

	MonsterType::MonsterType ( MonsterType* monster ) {

			this->type = monster->getType();

			this->name = monster->getName();

			this->life = monster->getLife();

			this->passive = monster->getPassive();

			this->firstDmg = monster->getFirstDmg();

			this->secondDmg = monster->getSecondDmg();
	}

	MonsterType::MonsterType ( magicMonster monster ) {

			this->type = "Magic";

			this->name = monster.getName();

			this->life = monster.getLife();

			this->passive = monster.getSpirit();

			this->firstDmg = monster.getFstDmg();

			this->secondDmg = monster.getSecDmg();
	}

	MonsterType::MonsterType ( wingedMonster monster ) {

			this->type = "Winged";

			this->name = monster.getName();

			this->life = monster.getLife();

			this->passive = monster.getVitality();

			this->firstDmg = monster.getFstDmg();

			this->secondDmg = monster.getSecDmg();
	}

	MonsterType::MonsterType () {

	}
//--------------------------------------------------------------------

//--------------------------------------------------------------------
//	atk

	int MonsterType::Atk ( int life, int damage ) {
		return life - damage;
	}

//--------------------------------------------------------------------