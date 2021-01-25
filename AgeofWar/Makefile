CXX=g++
CXXFLAGS=-Wall -Wextra -Werror
SOURCES=Archer.o Catapult.o Entite.o Player.o Units.o Playground.o Soldier.o SuperSoldier.o PlayerBase.o MainMenu.o Playturn.o Game.o main.o

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $< -c -o $@

main: $(SOURCES) 
	$(CXX) $^ -o $@

.PHONY: run clean

run: main
	./$<
clean:
	rm -f *.o *~ core