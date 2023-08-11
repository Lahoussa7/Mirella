#include <stdio.h>
#include <math.h>
int main(){
	int U[100]={1,2};
	int i,nbr;
	do{
	printf("entrez la tailles du tableau\n");
	scanf("%d",&nbr);
	for(i=2;i<nbr;i++){
		U[i]=U[i-1]+U[i-2];
		
	
	printf("la valeur de U[%d]=%d\n",i,U[i]);
		
}
     }  while(nbr!=0);
		return 0;
		
}
