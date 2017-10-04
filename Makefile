INC_DIR = include

all: hw2

hw2: hw2.o
ifeq (${OS}, Windows_NT)
	g++ -g3 -o hw2 hw2.o -lgtest
else
	g++ -g3 -o hw2 hw2.o -lgtest -lpthread
endif

hw2.o: $(INC_DIR)/container.h $(INC_DIR)/number.h $(INC_DIR)/atom.h $(INC_DIR)/variable.h utTerm.h hw2.cpp
	g++ -std=gnu++0x -c hw2.cpp

clean:
ifeq (${OS}, Windows_NT)
	del *.o hw2
else
	rm -f *.o hw2
endif

stat:
	wc *.h *.cpp
