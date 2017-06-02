/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#ifndef _MONSTERTYPE_HPP_
#define _MONSTERTYPE_HPP_

#include "../libs/headers.hpp"
#include "../libs/MonsterType.hpp"
#include "../libs/monster.hpp"

class MonsterType: public Monster {

private:

	std::string type;
	std::string name;
	int life;
	int passive;
	int firstDmg;
	int secondDmg;

public:

	void setType ( std::string );
	std::string getType();

	void setName ( std::string );
	std::string getName ();

	void setLife ( int );
	int getLife ();

	void setPassive ( int );
	int getPassive ();

	void setFirstDmg ( int );
	int getFirstDmg ();

	void setSecondDmg ( int );
	int getSecondDmg ();

	MonsterType ( MonsterType* );
	MonsterType();

	int Atk ( int, int );

};

#endif