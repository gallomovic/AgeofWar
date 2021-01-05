CXX=g++
CXXFLAGS=-Wall -Wextra -Werror

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $< -c -o $@

Playground: Playground.o main.o
	$(CXX) $^ -o $@

.PHONY: run clean

run: Playground
	./$<
clean:
	rm -f *.o *~ core