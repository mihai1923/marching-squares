# Țucă Mihai-Laurențiu 314CA

build: marching_squares

marching_squares: marching_squares.c
	gcc -Wall -Wextra -std=c99 marching_squares.c -o marching_squares

pack:
	zip -FSr 314CA_TucaMihai-Laurentiu_Tema2.zip README Makefile *.c *.h

clean:
	rm -f marching_squares

.PHONY: pack clean
