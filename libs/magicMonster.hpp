/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#ifndef _MAGICMONSTER_HPP_
#define _MAGICMONSTER_HPP_

#include "../libs/headers.hpp"
#include "../libs/monster.hpp"

class magicMonster: public Monster {

private:

	int knowledge;

public:

	void setKnowledge ( int );
	int useKnowledge (); // passive buff
	int getKnowledge ();

	int Spell ( int, int );




	magicMonster();
	//~magicMonster();
	
};

#endif