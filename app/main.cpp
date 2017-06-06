/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#include "../libs/headers.hpp"

int main () {

	System system;

	std::ifstream pEmpty( "../txt/Player.txt" );
	std::ifstream cEmpty( "../txt/Challenger.txt" );
	std::string pCheck;
	std::string cCheck;

	std::getline ( pEmpty, pCheck );
	std::getline ( cEmpty, cCheck );
	if ( pCheck == "" ) {
		std::cout << "-----------Game Over-----------\n\n";
		std::cout << "-----------You Lose------------\n\n";
	}

	if ( cCheck == "" ) {
		std::cout << "-----------Game Over-----------\n\n";
		std::cout << "------------You Won------------\n\n";
	}

	if ( pCheck != "" && cCheck != "" ) {
		
		std::cout << "\nCard Monsters\n\n";
		
		system.listMonster ();

	}
	
	return 0;
}