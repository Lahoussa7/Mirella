#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  /* char*pal="abac";
   int n=0;
   for(int i=0;i<strlen(pal);i++){
	   if(pal[i]==pal[strlen(pal)-i-1]){
		   n++;
	   }
   }
	   if(n<strlen(pal)){
		   printf("ce n'est pas pallindrome\n");
	   }
	   if(n==strlen(pal)){
		   printf("c'est pallindrome\n");
	   }*/
	  int inputArray[6]={2,4,5,-2,7,3};
	   int* tab;
    int l;
    l=6;
    tab=(int*)malloc(sizeof(int)*l);
    for(int i=0;i<l-1;i++){
        tab[i]=*(inputArray+i)*(*(inputArray+i+1));
        
       printf("%d\n",tab[i]); 
    }
    int tmp[6];
	 for(int j=0;j<l-1;j++){
		 for(int k=j+1;k<l-1;k++){ 
			 if(tab[j]<tab[k]){
				 tmp[j]=tab[j];
				 tab[j]=tab[k];
				 tab[k]=tmp[j];
			 }
		 }
			  
		   	

	 }int n=tab[0];
	 	printf("%d\n",n);
	
	return 0;
}
