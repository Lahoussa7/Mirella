#include <stdio.h>
#include <stdlib.h>
//#include "matrice.h"
int main(){
int taille,len;
taille=2;
len=2;
int** tab=malloc(sizeof(int*)*taille);
for(int i=0;i<len;i++){
	tab[i]=malloc(sizeof(int)*len);
} printf("les valeurs du tableau de la matrice n:1\n");
tab=tableau1(taille,len);
affich(tab,taille,len);
 printf("les valeurs du tableau de la matrice n:2\n");	
int** ta=malloc(sizeof(int*)*taille);
for(int i=0;i<len;i++){
	ta[i]=malloc(sizeof(int)*len);
}	
ta=tableau(taille,len);
affich1(ta,taille,len);
int** t=malloc(sizeof(int*)*taille);
for(int i=0;i<len;i++){
	t[i]=malloc(sizeof(int)*len);
}	printf("les resultats sont:\n");
   t=prodMatrice(tab,ta,taille,len);
   affichmat(t,taille);
   /*for(int i=0;i<taille;i++){
	   for(int j=0;j<taille;j++){
		   printf(" %d ",t[i][j]);
		  }
		  printf("\n");
   }*/
	return 0;
}
