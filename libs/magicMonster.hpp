/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#ifndef _MAGICMONSTER_HPP_
#define _MAGICMONSTER_HPP_

#include "../libs/headers.hpp"
#include "../libs/monster.hpp"
#include "../libs/beastMonster.hpp"
#include "../libs/wingedMonster.hpp"

class magicMonster: public Monster {

private:

	int knowledge;

public:

	void setKnowledge ( int );
	void useKnowledge (); // passive buff
	int getKnowledge ();

	//void fireBall (); // atk
	//void fireStorm(); // atk
/*
//--------------------------------------------------------------------
//	fireball

	void fireBall ( wingedMonster* );

	void fireBall ( magicMonster* );

	void fireBall ( beastMonster* );
//--------------------------------------------------------------------	

//--------------------------------------------------------------------
//	firestorm

	void fireStorm ( wingedMonster* );

	void fireStorm ( magicMonster* );

	void fireStorm ( beastMonster* );
//--------------------------------------------------------------------	
*/
	//magicMonster();
	//~magicMonster();
	
};

#endif