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

	std::string name;
	int life;
	int strength; //base damage for beast type
	int spirit; //base damage for magic type
	int vitality; //base damage for winged type
	int FstDmg;
	int SecDmg;

public:

	int damage;
	//Monster();
	//~Monster();

	void setName ( std::string );
	std::string getName();

	void setLife ( int );
	int getLife ();

	void setStrength ( int );
	int getStrength ();
	
	void setSpirit ( int );
	int getSpirit ();

	void setVitality ( int );
	int getVitality ();

	void setDamage ( int );
	int getDamage ();

	void setFstDmg ( int );
	int getFstDmg ();

	void setSecDmg ( int );
	int getSecDmg();	

};

#endif