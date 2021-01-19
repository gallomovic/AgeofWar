CXX=g++
CXXFLAGS=-Wall -Wextra -Werror
SOURCES=Archer.o Catapult.o Entite.o Player.o Units.o Playground.o Soldier.o SuperSoldier.o main.o 
HEADERS=Archer.h Catapult.h Entite.h Player.h Playground.h Soldier.h SuperSoldier.h Units.h

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $< -c -o $@

main: $(SOURCES) 
	$(CXX) $^ -o $@

.PHONY: run clean

run: main
	./$<
clean:
	rm -f *.o *~ core