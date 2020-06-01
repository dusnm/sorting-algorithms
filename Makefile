output: main.o helpers.o sorting.o 
	gcc main.o helpers.o sorting.o -o sorter

main.o: main.c
	gcc -c main.c

sorting.o: sorting.c sorting.h
	gcc -c sorting.c

helpers.o: helpers.c helpers.h
	gcc -c helpers.c

clean:
	rm *.o sorter
