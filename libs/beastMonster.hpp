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

	/**
	*	@brief variable to increase the damage
	*/
	int rage;

public:

	/**
	*	@brief set a value to rage variable
	*	@param value
	*/
	void setRage ( int );

	/**
	*	@brief	get the rage value
	*	@return new rage value
	*/
	int getRage ();

	/**
	*	@brief increase the damage value
	*	@return new damage value
	*/
	int useRage (); // passive buff

	/**
	*	@brief simulate the attack of a beast type 
	*	@param	life value
	*	@param	damage value
	*	@return new life for monster that take the hit
	*/
	int frenesi ( int, int ); // atk 

	/**
	*	@brief constructor
	*/
	beastMonster();
};

#endif