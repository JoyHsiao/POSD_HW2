all: HW2

HW2: HW2.o
	g++ -o HW2 HW2.o -lgtest -lpthread
HW2.o: HW2.cpp utTerm.h Number.h
	g++ -std=c++11 -c HW2.cpp

clean:
	rm -f *.o HW
stat:
	wc *.h *.cpp
