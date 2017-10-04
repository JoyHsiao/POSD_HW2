all: hw2

hw2: hw2.o
ifeq (${OS}, Windows_NT)
	g++ -o hw2 hw2.o -lgtest
else
	g++ -o hw2 hw2.o -lgtest -lpthread
endif

hw2.o: hw2.cpp utTerm.h container.h number.h atom.h variable.h
	g++ -std=c++11 -c hw2.cpp

clean:
	rm -f *.o hw
stat:
	wc *.h *.cpp
