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

	int agility;
	int speed;

public:

	void setAgility ( int );
	int getAgility ();
	void useAgility (); // passive buff

	void setSpeed ( int );
	int getSpeed ();

	//void holySpear (); // atk
	//void handOfGod (); // atk
/*
//--------------------------------------------------------------------
//	holy spear

	void holySpear ( wingedMonster* );

	void holySpear ( magicMonster* );

	void holySpear ( beastMonster* );
//--------------------------------------------------------------------	

//--------------------------------------------------------------------
//	hand of god

	void hondOfGod ( wingedMonster* );

	void hondOfGod ( magicMonster* );

	void hondOfGod ( beastMonster* );
//--------------------------------------------------------------------	
*/
	//wingedMonster();
	//~wingedMonster();
	
};

#endif
