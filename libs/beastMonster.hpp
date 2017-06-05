/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#ifndef _BEASTMONSTER_HPP_
#define _BEASTMONSTER_HPP_

#include "../libs/headers.hpp"
#include "../libs/monster.hpp"

class beastMonster: public Monster {

private:

	int rage;

public:

	void setRage ( int );
	int getRage ();
	int useRage (); // passive buff

	int frenesi ( int, int ); // atk 

	beastMonster();
	//~beastMonster();
	
};

#endif