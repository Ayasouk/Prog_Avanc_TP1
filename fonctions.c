#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* EXERCICE 1 */
extern int fact(int n){   /* fonction recursive non terminale */
   int v = n ;
   printf("%d ", n);

   if(n==0) return 1;
   v = (n * fact(n-1));
   printf("%d ",v);
   return v;
}

extern int factR(int n, int res){ /* fonction recursive terminale */
   int v = n;
   printf("%d ", n);

   if(n==0) return res;
   v = factR(n-1, res * n);
   printf("%d ", v);
   return v;
}

extern int factRT(int n){ /* fonction finale */
   return (factR(n, 1));
}
/* ********************************** */

/* EXERCICE 2 */
extern int nbChiffre(int n){
   if((n/10)==0) return 1;
   return (1 + nbChiffre(n/10));
}

extern int nbChiffreR(int n, int res){
   if((n/10)==0) return 1+res;
   return nbChiffreR( (n/10), 1+res); 
}

 extern int nbChiffreRT(int n){
    return nbChiffreR(n, 0);
 }
/* ********************************** */

/* EXERCICE 3 */
extern int fibR(int n){
   
   printf(" %d ", n);
   if(n==0) return 1;
   if(n==1) return 1;
   else {
      return (fibR(n-2) + fibR(n-1)) ;
   }
}

extern int fib_Ite1(int n, int tab[]){
    int i, v;
    
    for(i=2; i<=n; i++){
        tab[i] = tab[i-2] + tab[i-1];
        printf("%d",tab [i]);
        v =tab[i];
    }
    
    return v;
}

extern int fib_Ite2(int n){		 
		 if( n == 0 ) return 1;
		 if( n == 1 ) return 1;
		 
		 int i;
		 int Un2 = 1;  /* correspond à Un-2 */
		 int Un1 = 1; /* correspnd à Un-1 */
		 int  Un = Un2 + Un1 ;  /* correspond à Un */
		 
		 for(i=0; i<n; i++){
					Un1 = Un;
					Un2 = Un1;
					Un = Un2 + Un1;
			} 
			
			return Un;
}
/* ********************************** */

/* EXERCICE 4 */

extern int palind(char * chaine, int ind){
			int size= strlen(chaine);
			if((ind == size/2)||(ind == (size/2) - 1 )){
       return 1;			
			}
			if(chaine[ind] == chaine[size-ind]){
					return palind(chaine, ind+1);
			}
			else return 0;
}
extern int est_palind(char * chaine){
		return palind(chaine, 0);
}
/* ********************************** */

/* EXERCICE 5 */
extern void permuter(int * a, int * b){
		int w = *b;
		*b = *a;
		*a = w;	
}

extern int partition(int tab[], int debut, int fin){
   int i, j = debut;
   
   for(i = debut + 1; i<=fin; i++){
   		if(tab[i] < tab[debut]){
						j++;
						permuter(tab+i, tab+j);   		
   		}		
   }
		permuter(debut, j);
		return j;
}

extern tri_rapide(int tab[]){
			
}

/* ********************************** */
