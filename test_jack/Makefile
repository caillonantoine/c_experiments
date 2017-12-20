main: main.cpp libjackcpp.a
	g++ -I/include/ -o testjack $^ -ljack -lpthread -lrt

%.o: %.cpp
	g++ -c $^
