# Game of Turns

* The source code simulate a game between a player and an AI (artificial inteligence). It was programmed in C++. Developed for my Programing Language I grade at my IT Bachelor degree - UFRN. 

## Information

* Source code [available on GitHub](https://github.com/lpgoulart/GameOfTurns)

## Getting Help

* Report issues [issue tracker](https://github.com/lpgoulart/GameOfTurns/issues).

## Installation

* Download the full repository from my github [click here](https://github.com/lpgoulart/GameOfTurns), or follow the steps below:

```
	$ git clone https://github.com/lpgoulart/GameOfTurns.git
	$ cd GameOfTurns
	$ make

```

* To run, just go bin directory by typing:

```
	$ cd bin
	./GoT

```

## Report

* Read the grimoire of the player and choose a card to play
	
	src/system.cpp: Function void choosenOne ()

	src/system.cpp: Line: 58

* Read the grimoire of the AI and choose a card to play

	src/system.cpp: Function MonsterType choosenOne ()

	src/system.cpp: Line: 209

* Duel

	Magic Duel: src/system.cpp: Function void Duel ( magicMonster magic)	

	src/system.cpp: Line 260

	Winged Duel: src/system.cpp: Function void Duel ( wingedMonster winged )

	src/system.cpp: Line: 550

	Beast Duel: src/system.cpp: Function void Duel ( beastMonster beast )

	src/system.cpp: Line: 837

* Remove the loser card and put in the winner's file
	
	libs/system.hpp: Funtion Remove ( T object, int loser )

	libs/system.hpp: Line 69