CXX=g++
CXXFLAGS=-Wall -Wextra -Werror
SOURCES=Archer.cpp Catapult.cpp Entite.cpp Player.cpp Playground.cpp Soldier.cpp SuperSoldier.cpp Units.cpp main.cpp
HEADERS=Archer.h Catapult.h Entite.h Player.h Playground.h Soldier.h SuperSoldier.h Units.h

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $< -c -o $@

Main: $(SOURCES) 
	$(CXX) $^ -o $@

.PHONY: run clean

run: Main
	./$<
clean:
	rm -f *.o *~ core