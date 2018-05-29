CC=gcc -c
LD=gcc
SRC=fx.c simp.c main.c
OBJ=fx.o simp.o main.o
delta:
	$(CC) $(SRC)
	$(LD) $(OBJ) -o delta.x -lm
	rm -rf *.o
clean:
	rm -rf *.o delta.x


