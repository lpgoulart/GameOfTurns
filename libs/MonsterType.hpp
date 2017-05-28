/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#ifndef _MONSTERTYPE_HPP_
#define _MONSTERTYPE_HPP_


class MonsterType {

private:

	std::string name;
	int life;
	int passive;
	int firstDmg;
	int secondDmg;

public:

	void setName ( std::string );
	std::string getName ();

	void setLife ( int );
	int getLife ();

	void setPassive ( int );
	int getPassive ();

	void setFirstDmg ( int );
	int getFirstDmg ();

	void setSecondDmg ( int );
	int getSecondDmg ();

};

#endif