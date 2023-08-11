#include <stdio.h>
#include <stdlib.h>
int tabb1(int*tab,int n,int*ta1);
int mampiditra();
int*tabb(int d);
int*tabb2(int d);
int main (){
int d;
 d=3;
  printf(" la taille est :%d\n",d);
 

 int*tab=malloc(sizeof(int)*d);
 tab=tabb(d);
int*tan1=malloc(sizeof(int)*d);
 tan1=tabb2(d);

 int tan=tabb1(tab,d,tan1);
 printf(" le produit scalaire est %d\n",tan);
return 0;
}
int tabb1(int*tab,int n,int*ta1){
	int ta;
	ta=0;
    for(int i=0;i<n;i++){

     ta+=(tab[i]*ta1[i]);     
}

return ta;
}

int*tabb(int d){
	int*tan1=malloc(sizeof(int)*d);
	for(int i=0;i<d;i++){
		printf("valeur du tab1[%d]\n",i);
		scanf("%d",tan1+i);
	}
	return tan1;
}

int*tabb2(int d){
	int*tan=malloc(sizeof(int)*d);
	for(int i=0;i<d;i++){
		printf("valeur du tab2[%d]\n",i);
		scanf("%d",tan+i);
	}
	return tan;
}	
/*void affich(int*tab,int d){
	for(int i=0;i<d;i++){
		printf("%d\n",tab[i]);
	} 	
}*/
