CC=gcc
DEPS=main.o foo.o

hello: $(DEPS)
	$(CC) -o hello main.o foo.o
	
main.o:
	$(CC) -c main.c

foo.o:
	$(CC) -c foo.c

clean:
	rm -f *.o hello

run: hello
	./hello