/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#include "../libs/headers.hpp"
#include "../libs/beastMonster.hpp"
#include "../libs/magicMonster.hpp"
#include "../libs/wingedMonster.hpp"

//--------------------------------------------------------------------
// list monsters

	void System::listMonster () {

		System system;

		std::fstream player ( "../txt/Player.txt" ); 

		std::string choosenOne;
		std::string monsterType;
		std::string monsterName;
		std::string str;

		while ( std::getline ( player, str ) ) { //get the type
				monsterType = str;
				std::cout << monsterType << "\n";

			std::getline ( player, str ); //get the name
				monsterName = str;
				std::cout << monsterName << "\n";

			std::getline ( player, str ); //pass life
			std::getline ( player, str ); //pass passive value'
			std::getline ( player, str ); //pass first dmg
			std::getline ( player, str ); //pass second damage
		}

		std::cout << "\nchoose wisely...\nEnter the name: ";
		std::getline ( std::cin, choosenOne );

	system.choosenOne ( choosenOne );		

	}
//--------------------------------------------------------------------

//--------------------------------------------------------------------
// choosen one

	void System::choosenOne ( std::string theOne ) {
		

		System system;
		MonsterType type;
		bool exist = false;

		std::fstream player ("../txt/Player.txt");

		std::string monsterType;
		std::string str;
		int value;

		while ( std::getline ( player, str ) ) { //get the type
			monsterType = str;

			std::getline ( player, str ); //get the mosnter's name
			if ( str == theOne ) {
				type.setName ( str ); //set the name

				std::getline ( player, str ); //get the life value
				value =  std::stoi (str,nullptr,10) ;
				type.setLife ( value ); //turn string value into integer

				std::getline ( player, str ); //get the passive value
				value =  std::stoi (str,nullptr,10) ;
				type.setPassive ( value ); //turn string value into integer

				std::getline ( player, str ); //get the first damage value
				value =  std::stoi (str,nullptr,10) ;
				type.setFirstDmg( value ); //turn string value into integer

				std::getline ( player, str ); //get the second damage value
				value =  std::stoi (str,nullptr,10) ;
				type.setSecondDmg ( value ); //turn string value into integer

				exist = true;
			}
		}

			if ( exist == false ) {
				std::cout << "You don't have this monster\n\n";
			}
			else {
				std::cout << "\033[2J\033[1;1H";
			}

		system.createMonster ( monsterType, type );
	}
//--------------------------------------------------------------------

//--------------------------------------------------------------------
// create monster

	void System::createMonster ( std::string type, MonsterType features ) {

		int _switch = 0;
		wingedMonster winged;
		magicMonster magic;

		if ( type  == "Magic" ) {
			_switch = 1;
		}
		else if ( type == "Winged" ) {
			_switch = 2;
		}

		switch ( _switch ) {

			case 1:

				magic.setName( features.getName() );
				magic.setLife( features.getLife() );
				magic.setKnowledge( features.getPassive() );
				magic.setFstDmg ( features.getFirstDmg() );
				magic.setSecDmg ( features.getSecondDmg() );

				std::cout << "Name: " << magic.getName() << "\n";
				std::cout << "Life: " << magic.getLife() << "\n";
				std::cout << "Passive Skill: " << magic.getKnowledge() << "\n";
				std::cout << "First Dmg: " << magic.getFstDmg() << "\n";
				std::cout << "Second Dmg: " << magic.getSecDmg() << "\n";

				std::cout << "\nMagic Monster Created\n";
			break;
				
			case 2:

				winged.setName( features.getName() );
				winged.setLife( features.getLife() );
				winged.setAgility( features.getPassive() );
				winged.setFstDmg ( features.getFirstDmg() );
				winged.setSecDmg ( features.getSecondDmg() );

				std::cout << "Name: " << winged.getName() << "\n";
				std::cout << "Life: " << winged.getLife() << "\n";
				std::cout << "Passive Skill: " << winged.getAgility() << "\n";
				std::cout << "First Dmg: " << winged.getFstDmg() << "\n";
				std::cout << "Second Dmg: " << winged.getSecDmg() << "\n";

				std::cout << "\nWinged Monster Created\n";
			break;

			case 0:
				std::cout << "The type of monster don't exist\n\n";
			break;
		}
	}
//--------------------------------------------------------------------
