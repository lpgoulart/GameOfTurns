/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#ifndef _MONSTER_HPP_
#define _MONSTER_HPP_

#include "../libs/headers.hpp"

class Monster {

protected:

	///	@brief monster name
	std::string name;

	///	@brief monster life 
	int life;

	///	@brief	base damage for beast type
	int strength = 5; //base damage for beast type

	///	@brief base damage for magic type 
	int spirit = 5; //base damage for magic type

	///	@brief base damage for winged type
	int vitality = 5; //base damage for winged type
	
	///	@brief value of first attack
	int FstDmg;
	
	///	@brief value of the second attack
	int SecDmg;

public:

	/// @brief damage value for every monster type
	int damage;

	/**
	*	@brief set the monster name
	*	@param mosnter name
	*/
	void setName ( std::string );

	/**
	*	@brief get the monster name
	*	@return monster name
	*/
	std::string getName();

	/**
	*	@brief set a life value
	*	@param value
	*/
	void setLife ( int );
	
	/**
	*	@brief get the life value
	*	@return life value
	*/
	int getLife ();

	/**
	*	@brief set the strength value
	*	@param value
	*/
	void setStrength ( int );
	
	/**
	*	@brief get the strength value
	*	@retrun strength value
	*/
	int getStrength ();
	
	/**
	*	@brief set the spirit value
	*	@param value
	*/
	void setSpirit ( int );

	/**
	*	@brief get the spirit value 
	*	@return spirit value
	*/
	int getSpirit ();

	/**
	*	@brief set the vitality value
	*	@param value
	*/
	void setVitality ( int );
	
	/**
	*	@brief get the vitality value
	*	@return vitality value
	*/
	int getVitality ();

	/**
	*	@brief set a value to damage
	*	@param value
	*/
	void setDamage ( int );
	
	/**
	*	@brief get the damage value
	*	@return damage value
	*/
	int getDamage ();

	/**
	*	@brief set the first attack value
	*	@param value
	*/
	void setFstDmg ( int );

	/**
	*	@brief get the first attack value
	*	@return first attack value
	*/
	int getFstDmg ();

	/**
	*	@brief set the second attack value
	*	@param value
	*/
	void setSecDmg ( int );
	
	
	/**
	*	@brief get the second attack value
	*	@return second attack value
	*/
	int getSecDmg();	

};

#endif