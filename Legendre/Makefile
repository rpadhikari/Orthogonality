CC=gcc -c
LD=gcc
SRC=fact.c legendre.c ortho.c simp.c main.c
OBJ=fact.o legendre.o ortho.o simp.o main.o
SRC1=fact.c legendre.c test.c
OBJ1=fact.o legendre.o test.o

legendre:
	$(CC) $(SRC)
	$(LD) $(OBJ) -o legendre.x -lm
	rm -rf *.o
test:
	$(CC) $(SRC1)
	$(LD) $(OBJ1) -o test.x -lm
clean:
	rm -rf *.o legendre.x test.x data.dat


