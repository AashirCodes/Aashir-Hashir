program: calc.o sqrt.o
	gcc calc.o sqrt.o -o program

calc.o: calc.c sqrt.h
	gcc -c calc.c -o calc.o

sqrt.o: sqrt.c sqrt.h
	gcc -c sqrt.c -o sqrt.o

clean:
	rm -f *.o program

.PHONY: clean
