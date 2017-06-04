CC = g++
CPPFLAGS = -W -Wall -O0 -pedantic -std=c++11
CPPOBJCS = app/main.o src/beastMonster.o src/magicMonster.o src/wingedMonster.o src/monster.o src/MonsterType.o src/system.o 
TXT = txt/Challenger.txt txt/Player.txt
PROG = bin/GoT

all: dir text $(PROG) move

dir:
	mkdir -p bin build 

text:
	touch $(TXT)

$(PROG): $(CPPOBJCS)
	$(CC) $(CPPOBJCS) -o $(PROG)

main.o: app/main.cpp
	$(CC) $(CPPFLAGS) -c app/main.cpp

magicMonster.o: src/magicMonster.cpp
	$(CC) $(CPPFLAGS) -c src/magicMonster.cpp

wingedMonster.o: src/wingedMonster.cpp
	$(CC) $(CPPFLAGS) -c src/wingedMonster.cpp

beastMonster.o: src/beastMonster.cpp
	$(CC) $(CPPFLAGS) -c src/beastMonster.cpp

MonsterType.o: src/MonsterType.cpp
	$(CC) $(CPPFLAGS) -c src/MonsterType.cpp

system.o: src/system.cpp
	$(CC) $(CPPFLAGS) -c src/system.cpp

monster.o: src/monster.cpp
	$(CC) $(CPPFLAGS) -c src/monster.cpp

move:
	mv $(CPPOBJCS) build/ 

clean:
	-rm -rf build/*.o $(PROG) bin build
