/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#ifndef _SYSTEM_HPP_
#define _SYSTEM_HPP_

#include "../libs/headers.hpp"
#include "../libs/MonsterType.hpp"
#include "../libs/magicMonster.hpp"
#include "../libs/wingedMonster.hpp"
#include "../libs/beastMonster.hpp"

class System {

public:

	void listMonster ();
	void createMonster ( std::string, MonsterType );
	void choosenOne( std::string );
	MonsterType choosenOne ();
	
//--------------------------------------------------------------------
// Duel

	void Duel ( magicMonster );

	void Duel ( wingedMonster );

	//void Duel ( beastMonster );
//--------------------------------------------------------------------
	System();
	//~System();
	
};

#endif