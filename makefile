default: lab1




lab1: main.o

	gcc -o lab1 main.o lab1.c




main.o: main.c lab1.c

	gcc -c main.c lab1.c




clean:

	-rm -f *.o lab1
