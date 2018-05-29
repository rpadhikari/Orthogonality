CC=gcc -c
LD=gcc
SRC=fact.c fx.c simp.c main.c
OBJ=fact.o fx.o simp.o main.o
delta:
	$(CC) $(SRC)
	$(LD) $(OBJ) -o delta.x -lm
	rm -rf *.o
clean:
	rm -rf *.o delta.x


