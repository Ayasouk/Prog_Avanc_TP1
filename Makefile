main : fonctions.c fonctions.h main.c
	gcc fonctions.c fonctions.h main.c -o main

clean : 
	rm *.o
