/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#ifndef _WINGEDMONSTER_HPP_
#define _WINGEDMONSTER_HPP_

#include "../libs/headers.hpp"
#include "../libs/monster.hpp"
#include "../libs/beastMonster.hpp"
#include "../libs/magicMonster.hpp"
#include "../libs/wingedMonster.hpp"

class wingedMonster: public Monster {

private:

	int speed;

public:

	void setAgility ( int );
	int getAgility ();
	int useAgility (); // passive buff

	//void holySpear (); // atk
	//void handOfGod (); // atk

//--------------------------------------------------------------------
//	holy atk

	int holyAtk ( int, int );
//--------------------------------------------------------------------	

//--------------------------------------------------------------------
//	divine atk

	int divineAtk ( int, int );
//--------------------------------------------------------------------	

	//wingedMonster();
	//~wingedMonster();
	
};

#endif
