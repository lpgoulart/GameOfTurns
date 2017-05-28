/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#ifndef _BEASTMONSTER_HPP_
#define _BEASTMONSTER_HPP_

#include "../libs/headers.hpp"
#include "../libs/monster.hpp"
#include "../libs/magicMonster.hpp"
#include "../libs/wingedMonster.hpp"

class BeastMonster: protected Monster {

private:

	int rage;

public:

	void setRage ();
	int getRage ();
	void useRage (); // passive buff

	void Berserk (); // atk 
	void Frenesi (); // atk

	BeastMonster();
	~BeastMonster();
	
};

#endif