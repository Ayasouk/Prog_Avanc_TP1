#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"
#include <getopt.h>

#define N 10

extern void usage(char * programme);

int main(int argc, char ** argv){
   int tab[N];
   tab[0]=1;
   tab[1]=1;
   
   int flag_rec = 0;
		int flag_ite = 0;
		int flag_fact = 0;
		int flag_fib = 0;
		int flag_nbCh = 0;
		char opt;
		
   if(argc < 1){
      usage(argv[0]);
      exit(-1);
   }
		
	 while((opt = getopt(argc, argv, "fFrin")) != -1){
				switch(opt) {
										case 'f' : flag_fact = 1;
																	 break;
										case 'F' : flag_fib = 1;
																	 flag_fact = 0;
																  break;
										case 'r' : flag_rec = 1;
																	 flag_ite =0;
																	 break;
										case 'i' : flag_ite = 1;
																	 break;
										case 'n' : flag_nbCh = 1;
																	 break;
										case '?' : printf("invalid option\n");
																	usage(argv[0]);
																	return 0;
																	break;
				}		
	 }  /* while(opt...) */
	 
		int nbr = atoi(argv[optind]);	 
	 
	 if(flag_ite) {  /* si l'utilisateur demande une fonction iterative */
      if(flag_fib) {
			     	printf(" fibonacci iterative : %d\n", fib_Ite1(nbr, tab));
      }
      if(flag_fact)	{
							printf(" factorielle iterative : %d\n", fact(nbr));      
      } 	
	 	}
	 	
	 	if(flag_rec) {
				if(flag_fib) {
							printf(" fibonacci recursive : %d\n", fibR(nbr));							
				}	 	
				if(flag_fact){
							printf(" factorielle recursive : %d\n", factRT(nbr));				
				}
	 	}
	 	
	 	if(flag_nbCh) {
							printf("le nombre a %d chiffres\n", nbChiffre(nbr));	 	
	 	}
}

extern void usage(char * programme){
		printf("erreur arguments : %s [options] [nombre]\n", programme);
		printf("options peut-etre :\n -i (iterative) \n -r (recursif)\n -f (appel de fonction de factorielle)\n -F (appel de fonction de fibonacci\n -n (donne le nbr de chiffre du nbr donné en argument */)\n");
		printf("nombre correspnd au nombre utilisé lors de l'appel a une fonction \n");
}