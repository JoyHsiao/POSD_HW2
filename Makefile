all: hw2

hw2: hw2.o
	g++ -o hw2 hw2.o -lgtest -lpthread
hw2.o: hw2.cpp utTerm.h container.h number.h atom.h variable.h
	g++ -std=c++11 -c hw2.cpp

clean:
	rm -f *.o hw
stat:
	wc *.h *.cpp
