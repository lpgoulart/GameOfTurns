/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#include "../libs/headers.hpp"
#include "../libs/beastMonster.hpp"
#include "../libs/magicMonster.hpp"
#include "../libs/wingedMonster.hpp"
#include "../libs/MonsterType.hpp"	

	System::System() {

	}

//--------------------------------------------------------------------
// list monsters Player

	void System::listMonster () {

		System system;

		std::fstream player ( "../txt/Player.txt" ); 

		std::string choosenOne;
		std::string monsterType;
		std::string monsterName;
		std::string str;

		while ( std::getline ( player, str ) ) { //get the type
				monsterType = str;
				std::cout << monsterType << std::endl;

			std::getline ( player, str ); //get the name
				monsterName = str;
				std::cout << monsterName << std::endl;

			std::getline ( player, str ); //pass life
			std::getline ( player, str ); //pass passive value'
			std::getline ( player, str ); //pass first dmg
			std::getline ( player, str ); //pass second damage
				std::cout << std::endl;
		}

		std::cout << "\nchoose wisely...\nEnter the name: ";
		std::getline ( std::cin, choosenOne );

	system.choosenOne ( choosenOne );		

	}
//--------------------------------------------------------------------

//--------------------------------------------------------------------
// choosen one Player

	void System::choosenOne ( std::string theOne ) {
		

		System system;
		MonsterType type;
		bool exist = false;

		std::fstream player;
		player.open( "../txt/Player.txt", std::fstream::in | std::fstream::out );


		std::string monsterType;
		std::string str;
		int value;

		if( player.is_open() ) {

			while ( std::getline ( player, str ) || exist != true ) { //get the type
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
					break;
				}
			}
		}

			if ( exist == false ) {
				std::cout << "You don't have this monster\n\n";
			}
			else {
				system.createMonster ( monsterType, type );
			}
	}
//--------------------------------------------------------------------

//--------------------------------------------------------------------
// create monster Player

	void System::createMonster ( std::string type, MonsterType features ) {

		int _switch = 0;
		wingedMonster winged;
		magicMonster magic;
		System system;

		std::cout << type;

		if ( type  == "Magic" ) {
			_switch = 1;
		}
		else if ( type == "Winged" ) {
			_switch = 2;
		}

		switch ( _switch ) {

			case 1:
				std::cout << "\033[2J\033[1;1H";
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

				system.Duel ( magic );

			break;
				
			case 2:
				std::cout << "\033[2J\033[1;1H";				
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

//--------------------------------------------------------------------
// choosen one Challenger

	MonsterType System::choosenOne () {
		
		MonsterType monster;

		std::fstream challenger ("../txt/Challenger.txt");

		std::string str;
		int value;

		if ( std::getline ( challenger, str ) ) { //get the type
				monster.setType ( str );

				std::getline ( challenger, str ); //get the mosnter's name
				monster.setName ( str ); //set the name

				std::getline ( challenger, str ); //get the life value
				value =  std::stoi (str,nullptr,10) ;
				monster.setLife ( value ); //turn string value into integer

				std::getline ( challenger, str ); //get the passive value
				value =  std::stoi (str,nullptr,10) ;
				monster.setPassive ( value ); //turn string value into integer

				std::getline ( challenger, str ); //get the first damage value
				value =  std::stoi (str,nullptr,10) ;
				monster.setFirstDmg( value ); //turn string value into integer

				std::getline ( challenger, str ); //get the second damage value
				value =  std::stoi (str,nullptr,10) ;
				monster.setSecondDmg ( value ); //turn string value into integer
		}

				if( monster.getType() != "") {
					return monster;
				} 
				else {
					std::cout << "-----------Game Over-----------\n\n";
					std::cout << "------------You Won------------\n\n";
					exit(0);
				}
	}
//--------------------------------------------------------------------

//--------------------------------------------------------------------
//	Duel

	void System::Duel ( magicMonster magic) {

		System system;
		MonsterType challenger ( system.choosenOne () );
		int action;

		if ( challenger.getType() == "Magic" ) {
			std::cout << "Magic against magic\n\n";
			std::cout << magic.getName() << std::endl;
			std::cout << challenger.getName() << std::endl;

			while ( magic.getLife() >= 0 || challenger.getLife() >=0 ) {
				std::cout << "( 1 ) Use knowledge\n";
				std::cout << "( 2 ) Use spell\n";
				std::cout << "( 3 ) Use stronger spell\n";
				std::cout << "Choose: ";
				std::cin >> action;
				std::cin.get();

				switch ( action ) {
					case 1:
						std::cout << "I'll use Knowledge!\n\n";
					break;
					case 2:
						std::cout << "I'll cast my spell!\n\n";
					break;
					case 3:
						std::cout << "I'll use my secret scroll!!\n\n";
					break;
				}
			}

		}


	}
//--------------------------------------------------------------------
