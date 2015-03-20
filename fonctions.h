#include <stdio.h>
#include <stdlib.h>

/* Les fonctions finissant par un R sont récursifs et celles finisssant par I[chiffre] sont Itératives */

/* Exercice 1 : Factorielle */
extern int fact(int n);
extern int factR(int n, int res);
extern int factRT(int n);

/* Exercice 2 : nmbre de chiffre d'un nbr */
extern int nbChiffre(int n);
extern int nbChiffreR(int n, int res);
extern int nbChiffreRT(int n);

/* Exercice 3 : fonction relative à la suite de fibonacci */
extern int fibR(int n);
extern int fib_Ite1(int n, int tab[]);
extern int fib_Ite2(int n);

/* Exercice 4 : fonction qui verifie si la chaine est un palindrome ou non */
extern int est_palind(char * chaine);
extern int palind(char * chaine, int ind);

/* Exercice 5 : fonctions pour le tri rapide d'un tableau d'entier */
extern permuter(int * a, int * b);
extern partition(int debut, int fin);
extern tri_rapide(int tab[]);