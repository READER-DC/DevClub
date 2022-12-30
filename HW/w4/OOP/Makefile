mage:
	g++ -c Mage.cpp -o Mage.o

soldier:
	g++ -c Soldier.cpp -o Soldier.o

main:
	g++ -c main.cpp -o main.o

all: mage soldier main
	g++ *.o -o main.out

clear:
	rm *.o *.out

run: all
	./main.out