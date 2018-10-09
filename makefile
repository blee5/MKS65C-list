all: linkedlist.o test.o linkedlist.h
	gcc linkedlist.o test.o

run: all
	./a.out

linkedlist.o: linkedlist.c
	gcc -c linkedlist.c

test.o: test.c
	gcc -c test.c

clean:
	rm *.o -f
	rm a.out -f
