/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#ifndef _SYSTEM_HPP_
#define _SYSTEM_HPP_

#include "../libs/headers.hpp"
#include "../libs/MonsterType.hpp"
#include "../libs/magicMonster.hpp"
#include "../libs/wingedMonster.hpp"
#include "../libs/beastMonster.hpp"

class System {

public:

	void listMonster ();
	void createMonster ( std::string, MonsterType );
	void choosenOne( std::string );
	MonsterType choosenOne ();
	
//--------------------------------------------------------------------
// Duel

	void Duel ( magicMonster );

	void Duel ( wingedMonster );

	//void Duel ( beastMonster );
//--------------------------------------------------------------------
	
//--------------------------------------------------------------------
//	Remove card
	
	template < typename T >
	void Remove ( T object, int loser ) {

		std::ifstream player ( "../txt/Player.txt" );
		std::ifstream challenger ( "../txt/Challenger.txt" );
		std::ofstream tempPlayer ( "../txt/tempPlayer.txt" );
		std::ofstream tempChallenger ( "../txt/tempChallenger.txt" );
		std::string strType;
		std::string strPlayer;
		std::string strChallenger;

		if ( loser == 1 ) { //player -> challenger

			MonsterType obj ( object );

				std::getline ( player, strType );
			while ( std::getline ( player, strPlayer ) ) { //get the type
		
				if ( strPlayer == obj.getName() ) {
					tempChallenger << strType << std::endl;
					tempChallenger << strPlayer << std::endl;
					std::getline ( player, strPlayer );
					tempChallenger << strPlayer << std::endl;
					std::getline ( player, strPlayer );
					tempChallenger << strPlayer << std::endl;
					std::getline ( player, strPlayer );
					tempChallenger << strPlayer << std::endl;
					std::getline ( player, strPlayer );
					tempChallenger << strPlayer << std::endl;
					std::getline ( player, strPlayer ); 
						
					while ( std::getline ( challenger, strChallenger ) ) {
						tempChallenger << strChallenger << std::endl;
					}
					tempChallenger << "";
				}

				if ( strPlayer == "" ) {
					tempPlayer << strPlayer << std::endl;
					break;
				}
				else {
					tempPlayer << strPlayer << std::endl;
				}
			}
		}

		else if ( loser == 0 ){ // challenger -> player 

			MonsterType obj ( object );

				std::getline ( challenger, strType );
			while ( std::getline ( challenger, strChallenger ) ) { //get the type
		
				if ( strChallenger == obj.getName() ) {
					tempPlayer << strType << std::endl;
					tempPlayer << strChallenger << std::endl;
					std::getline ( challenger, strChallenger );
					tempPlayer << strChallenger << std::endl;
					std::getline ( challenger, strChallenger );
					tempPlayer << strChallenger << std::endl;
					std::getline ( challenger, strChallenger );
					tempPlayer << strChallenger << std::endl;
					std::getline ( challenger, strChallenger );
					tempPlayer << strChallenger << std::endl;
					std::getline ( challenger, strChallenger ); 
						
					while ( std::getline ( player, strPlayer ) ) {
						tempPlayer << strPlayer << std::endl;
					}
					tempPlayer << "";
				}

				if ( strChallenger == "" ) {
					tempChallenger << strChallenger << std::endl;
					break;
				}
				else {
					tempChallenger << strChallenger << std::endl;
				}
			}
		}

		remove ( "../txt/Player.txt" );
		remove ( "../txt/Challenger.txt" );

		rename ( "../txt/tempChallenger.txt","../txt/Challenger.txt" );
		rename ( "../txt/tempPlayer.txt","../txt/Player.txt" );


	}
//--------------------------------------------------------------------

	System();
	
};

#endif