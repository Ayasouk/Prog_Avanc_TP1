#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"

int main(int argc, char * argv[]){
		if(argc < 2){
      printf("erreur nbr argumets \n");		
		}
		
	 (est_palind("axa"))? printf("--> est palindrome\n") : printf("---> n'est pas palindrome\n");
}