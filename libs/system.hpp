/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#ifndef _SYSTEM_HPP_
#define _SYSTEM_HPP_

#include "../libs/headers.hpp"
#include "../libs/MonsterType.hpp"

class System {

public:

	void listMonster ();
	void choosenOne( std::string );
	void createMonster ( std::string, MonsterType );
	
	//System();
	//~System();
	
};

#endif