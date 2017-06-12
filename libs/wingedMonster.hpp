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

	/**
	*	@brief set the chance of enemy's attach hit
	*/
	int speed;

public:

	/**
	*	@brief Set a new value to speed
	*/
	void setAgility ( int );

	/**
	*	@return value of speed variable
	*/
	int getAgility ();

	/**
	*	@brief increase the speed value
	*	@return the new value of speed
	*/
	int useAgility (); // passive buff

//--------------------------------------------------------------------
//	holy atk

	/**
	*	@brief simple attack
	*	@return the damage value
	*/	
	int holyAtk ( int, int );
//--------------------------------------------------------------------	

//--------------------------------------------------------------------
//	divine atk

	/**
	*	@brief simple attack
	*	@return the damage value
	*/
	int divineAtk ( int, int );
//--------------------------------------------------------------------	
	
};

#endif
