CC=gcc -c
LD=gcc
SRC=fnx.c main.c 
OBJ=fnx.o main.o 
fnx:
	$(CC) $(SRC)
	$(LD) $(OBJ) -o fnx.x -lm
	rm *.o
clean:
	rm -rf *.o *.x

