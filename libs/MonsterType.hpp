/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#ifndef _MONSTERTYPE_HPP_
#define _MONSTERTYPE_HPP_

#include "../libs/headers.hpp"
#include "../libs/MonsterType.hpp"
#include "../libs/monster.hpp"
#include "../libs/magicMonster.hpp"
#include "../libs/wingedMonster.hpp"
#include "../libs/beastMonster.hpp"

class MonsterType: public Monster {

private:

	/// @brief	monster type
	std::string type;

	///	@brief	monster name
	std::string name;

	///	@brief	monster life
	int life;

	///	@brief	monster passive value
	int passive;

	///	@brief	monster first atk value
	int firstDmg;

	///	@brief	monster second atk value
	int secondDmg;

public:

	///	@brief	set the monster type
	///	@param	type
	void setType ( std::string );

	///	@brief	get the mosnter name
	///	@return 	return monster name
	std::string getType();

	///	@brief	set the monster name
	///	@param	name
	void setName ( std::string );

	///	@brief	get the monster name	
	///	@return the monster name
	std::string getName ();

	///	@brief	set the mosnter life
	///	@param	value
	void setLife ( int );

	///	@brief	get the monster life
	///	@return the mosnter life
	int getLife ();

	///	@brief	set the monster passive skill
	///	@param value
	void setPassive ( int );

	///	@brief	get the monster passive skill 
	///	@return the value of passive skill
	int getPassive ();

	///	@brief	set the value of first attack
	///	@param value
	void setFirstDmg ( int );

	///	@brief	get the value of first attack
	///	@return value of the first attack
	int getFirstDmg ();

	///	@brief	get the value of the second attack
	///	@param value
	void setSecondDmg ( int );

	///	@brief	get the value of second attack
	///	@return	value of the second attack
	int getSecondDmg ();

	///	@brief create a generic object from another that already exist
	MonsterType ( MonsterType* );

	///	@brief create a generic object from a magic type that exist
	MonsterType ( magicMonster );

	///	@brief create a generic object from a winged type that already exist
	MonsterType ( wingedMonster );

	///	@brief create a generic object from a beast type that already exist 
	MonsterType ( beastMonster );

	/// constructor
	MonsterType();

	///	@brief simulate the attack
	/// @param life value
	///	@param damage value
	/// @return new life for monster that take the hit
	int Atk ( int, int );

};

#endif