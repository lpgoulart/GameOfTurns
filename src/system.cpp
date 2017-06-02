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
// list monsters Player OK

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
// choosen one Player OK

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
// create monster Player OK

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

				system.Duel ( winged );

			break;

			case 0:
				std::cout << "The type of monster don't exist\n\n";
			break;
		}
	} 
//--------------------------------------------------------------------

//--------------------------------------------------------------------
// choosen one Challenger OK

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
//	Magic Duel 	/	MAGIC DUEL MAGIC OK		/	MAGIC DUEL WINGED OK

	void System::Duel ( magicMonster magic) {

		System system;
		MonsterType challenger ( system.choosenOne () );
		int action;
		int damage = 0;
		int luck;

		if ( challenger.getType() == "Magic" ) {	//magic vs magic
			std::cout << "Magic against magic\n\n";
			std::cout << magic.getName() << std::endl;
			std::cout << challenger.getName() << std::endl;

			do {

				std::cout << "( 1 ) Use knowledge\n";
				std::cout << "( 2 ) Use spell\n";
				std::cout << "( 3 ) Use stronger spell\n";
				std::cout << "Choose: ";
				std::cin >> action;
				std::cout << "\033[2J\033[1;1H";
				std::cin.get();

				switch ( action ) {
					case 1:
							std::cout << "Player: I'll use Knowledge!\n\n";
							damage = magic.useKnowledge();
							magic.setKnowledge( damage );
					break;
					case 2:
						std::cout << "Player: I'll cast my spell!\n\n";
							damage = magic.getFstDmg() + magic.getSpirit() + magic.getKnowledge();
							damage = magic.Spell ( challenger.getLife(), damage );

							challenger.setLife( damage );

					break;
					case 3:
						std::cout << "I'll use my secret scroll!!\n\n";

							damage = magic.getSecDmg() + magic.getSpirit() + magic.getKnowledge();
							damage = magic.Spell ( challenger.getLife(), damage );

							challenger.setLife( damage );
					break;
				}

				if ( magic.getLife() <= 0 || challenger.getLife() <= 0 ) {
					std::cout << "You won\n\n";
					
					std::cout << magic.getName() << std::endl;
					std::cout << magic.getLife() << "\n\n";
					
					std::cout << challenger.getName() << std::endl;
					std::cout << challenger.getLife() << "\n\n";

					break;
				}

				luck = rand () % 7 + 0;

					if ( luck >= 3 ) {
						action = 2;
						switch ( action ) {
							case 2:
								std::cout << "Enemy: I'll cast my spell!\n\n";
									damage = challenger.getFirstDmg() + challenger.getSpirit();
									damage = challenger.Atk ( magic.getLife(), damage );

									magic.setLife( damage );

							break;
							case 3:
								std::cout << "I'll use my secret scroll!!\n\n";
							break;
						}
					} 
					else {
						std::cout << "Enemy: Miss\n";
					} 

				std::cout << magic.getName() << std::endl;
				std::cout << magic.getLife() << "\n\n";
				
				std::cout << challenger.getName() << std::endl;
				std::cout << challenger.getLife() << "\n\n";

				if ( magic.getLife() <= 0 || challenger.getLife() <= 0 ) {
					break;
				}

			} while ( 1 );
		}

		else if ( challenger.getType() == "Winged" ) {	//magic vs winged
				std::cout << "Magic against winged\n\n";
				std::cout << magic.getName() << std::endl;
				std::cout << challenger.getName() << std::endl;

				do {

					std::cout << "( 1 ) Use Knowledge\n";
					std::cout << "( 2 ) Use Spell\n";
					std::cout << "( 3 ) Use Stronger spell\n";
					std::cout << "Choose: ";
					std::cin >> action;
					std::cout << "\033[2J\033[1;1H";
					std::cin.get();

					switch ( action ) {
						case 1:
								std::cout << "Player: I'll use Knowledge!\n\n";
								damage = magic.useKnowledge();
								magic.setSpirit( damage );
						break;
						case 2:
							std::cout << "Player: I'll cast my spell!\n\n";
								damage = magic.getKnowledge() + magic.getSpirit() + magic.getFstDmg();
								damage = magic.Spell ( challenger.getLife(), damage );

								challenger.setLife( damage );

						break;
						case 3:
							std::cout << "I'll use my secret scroll!!\n\n";

							damage = magic.getSecDmg() + magic.getSpirit() + magic.getKnowledge();
							damage = magic.Spell ( challenger.getLife(), damage );

							challenger.setLife( damage );
						break;
					}

					if ( magic.getLife() <= 0 || challenger.getLife() <= 0 ) {
						std::cout << "You won\n\n";

						std::cout << magic.getName() << std::endl;
						std::cout << magic.getLife() << "\n\n";
						
						std::cout << challenger.getName() << std::endl;
						std::cout << challenger.getLife() << "\n\n";
						break;
					}

					luck = rand () % 7 + 0;

						if ( luck >= 5 ) {
							action = 2;
							switch ( action ) {
								case 2:
									std::cout << "Enemy: I'll use holy attack!\n\n";
										damage = challenger.getFirstDmg() + challenger.getVitality();
										damage = challenger.Atk ( magic.getLife(), damage );

										magic.setLife( damage );

								break;
								case 3:
									std::cout << "I'll Divine attack!!\n\n";
								break;
							}
						} 
						else {
							std::cout << "Enemy: Miss\n";
						} 

					std::cout << magic.getName() << std::endl;
					std::cout << magic.getLife() << "\n\n";
					
					std::cout << challenger.getName() << std::endl;
					std::cout << challenger.getLife() << "\n\n";

					if ( magic.getLife() <= 0 || challenger.getLife() <= 0 ) {
						break;
					}

				} while ( 1 );
			}
	}
//--------------------------------------------------------------------

//--------------------------------------------------------------------
//	Winged Duel 	/	WINGED DUEL MAGIC 	/	WINGED DUEL WINGED 

	void System::Duel ( wingedMonster winged ) {

		System system;
		MonsterType challenger ( system.choosenOne () );
		int action;
		int damage = 0;
		int luck;

		if ( challenger.getType() == "Magic" ) {	//winged vs magic
			std::cout << "Winged against magic\n\n";
			std::cout << winged.getName() << std::endl;
			std::cout << challenger.getName() << std::endl;

			do {

				std::cout << "( 1 ) Use Agility\n";
				std::cout << "( 2 ) Use holy attack\n";
				std::cout << "( 3 ) Use divine attack\n";
				std::cout << "Choose: ";
				std::cin >> action;
				std::cout << "\033[2J\033[1;1H";
				std::cin.get();

				switch ( action ) {
					case 1:
							std::cout << "Player: I'll use Agility!\n\n";
							winged.useAgility();
					break;
					case 2:
						std::cout << "Player: I'll use holy attack!\n\n";
							damage = winged.getFstDmg() + winged.getVitality();
							damage = winged.holyAtk ( challenger.getLife(), damage );

							challenger.setLife( damage );

					break;
					case 3:
						std::cout << "I'll use divine attack!!\n\n";
							damage = winged.getFstDmg() + winged.getVitality();
							damage = winged.divineAtk ( challenger.getLife(), damage );

							challenger.setLife( damage );
					break;
				}

				if ( winged.getLife() <= 0 || challenger.getLife() <= 0 ) {
					std::cout << "You won\n\n";
					
					std::cout << winged.getName() << std::endl;
					std::cout << winged.getLife() << "\n\n";
					
					std::cout << challenger.getName() << std::endl;
					std::cout << challenger.getLife() << "\n\n";

					break;
				}

				luck = rand () % winged.getAgility() + 0;

					if ( luck >= winged.getAgility()/2 + 3 ) {
						action = 2;
						switch ( action ) {
							case 2:
								std::cout << "Enemy: I'll cast my spell!\n\n";
									damage = challenger.getFirstDmg() + challenger.getSpirit();
									damage = challenger.Atk ( winged.getLife(), damage );

									winged.setLife( damage );

							break;
							case 3:
								std::cout << "I'll use my secret scroll!!\n\n";
							break;
						}
					} 
					else {
						std::cout << "Enemy: Miss\n";
					} 

				std::cout << winged.getName() << std::endl;
				std::cout << winged.getLife() << "\n\n";
				
				std::cout << challenger.getName() << std::endl;
				std::cout << challenger.getLife() << "\n\n";

				if ( winged.getLife() <= 0 || challenger.getLife() <= 0 ) {
					break;
				}

			} while ( 1 );
		}

		else if ( challenger.getType() == "Winged" ) {	//winged vs winged
				std::cout << "Magic against winged\n\n";
				std::cout << winged.getName() << std::endl;
				std::cout << challenger.getName() << std::endl;

				do {

					std::cout << "( 1 ) Use Knowledge\n";
					std::cout << "( 2 ) Use Spell\n";
					std::cout << "( 3 ) Use Stronger spell\n";
					std::cout << "Choose: ";
					std::cin >> action;
					std::cout << "\033[2J\033[1;1H";
					std::cin.get();

					switch ( action ) {
						case 1:
							std::cout << "Player: I'll use Agility!\n\n";
								winged.useAgility();
						break;
						case 2:
							std::cout << "Player: I'll use holy attack!\n\n";
								damage = winged.getFstDmg() + winged.getVitality();
								damage = winged.holyAtk ( challenger.getLife(), damage );

								challenger.setLife( damage );

						break;
						case 3:
							std::cout << "I'll use divine attack!!\n\n";
								damage = winged.getFstDmg() + winged.getVitality();
								damage = winged.divineAtk ( challenger.getLife(), damage );

								challenger.setLife( damage );
						break;
					}

					if ( winged.getLife() <= 0 || challenger.getLife() <= 0 ) {
						break;
					}

					luck = rand () % winged.getAgility() + 0;

					if ( luck >= winged.getAgility()/2 + 3 ) {
							action = 2;
							switch ( action ) {
								case 2:
									std::cout << "Enemy: I'll use holy attack!\n\n";
										damage = challenger.getFirstDmg() + challenger.getVitality();
										damage = challenger.Atk ( winged.getLife(), damage );

										winged.setLife( damage );

								break;
								case 3:
									std::cout << "I'll Divine attack!!\n\n";
								break;
							}
						} 
						else {
							std::cout << "Enemy: Miss\n";
						} 

					std::cout << winged.getName() << std::endl;
					std::cout << winged.getLife() << "\n\n";
					
					std::cout << challenger.getName() << std::endl;
					std::cout << challenger.getLife() << "\n\n";

					if ( winged.getLife() <= 0 || challenger.getLife() <= 0 ) {
						break;
					}

				} while ( 1 );
			}
	}
//--------------------------------------------------------------------
