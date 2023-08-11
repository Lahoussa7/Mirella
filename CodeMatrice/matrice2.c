#include <stdio.h>
#include <stdlib.h>
//#include "matrice.h"
int main(){
	
	int taille,l;
taille=3;
l=3;
int** tab=malloc(sizeof(int)*taille);
for(int i=0;i<taille;i++){
	tab[i]=malloc(sizeof(int)*l);
} printf("les valeurs du tableau de la matrice n:1\n");
tab=tableau1(taille,l);	
affich(tab,taille,l);	
int** ta=malloc(sizeof(int)*taille);
for(int i=0;i<taille;i++){
	ta[i]=malloc(sizeof(int)*l);
} printf("les valeurs du tableau de la matrice n:2\n");	
ta=tableau(taille,l);
affich1(ta,taille,l);
int** t=malloc(sizeof(int)*taille);
for(int i=0;i<taille;i++){
	t[i]=malloc(sizeof(int)*l);
}	
   t=calAddmat(tab,ta,taille,l);
   for(int i=0;i<taille;i++){
	   for(int j=0;j<l;j++){
		   printf(" %d ",t[i][j]);
		  }
		  printf("\n");
   }
	
	return 0;
}
