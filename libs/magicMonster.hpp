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

	/**
	*	@brief variable to increase the damage
	*/
	int knowledge;

public:

	/**
	*	@brief set a value to rage variable
	*	@param value
	*/
	void setKnowledge ( int );

	/**
	*	@brief	get the rage value
	*	@return new rage value
	*/
	int getKnowledge ();
	
	/**
	*	@brief increase the damage value
	*	@return new damage value
	*/
	int useKnowledge (); // passive buff

	/**
	*	@brief simulate the attack of a beast type 
	*	@param	life value
	*	@param	damage value
	*	@return new life for monster that take the hit
	*/
	int Spell ( int, int );

	/**
	*	@brief constructor
	*/
	magicMonster();
	
};

#endif