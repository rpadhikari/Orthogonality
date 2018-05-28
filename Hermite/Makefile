FC=gcc -c
LD=gcc
SRC=fact.c Hermite.c ortho.c simp.c main.c
OBJ=fact.o Hermite.o ortho.o simp.o main.o
ortho:
	$(FC) $(SRC)
	$(LD) $(OBJ) -o ortho.x -lm
	rm -rf *.o
clean:
	rm -rf ortho.x
	rm -rf *.o

