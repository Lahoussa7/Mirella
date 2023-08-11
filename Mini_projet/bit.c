#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char*cat;
	int j=0;
	cat=malloc(30);
	int ca[2];
	//ca=malloc(20);
	cat="12/405/2023";
	for(int i=0;i<strlen(cat);i++){
		if(cat[i]=='/'){
			ca[0]=i;
			
			break;
			
		}
	}
	
    printf(" coucou %d ",ca[0]);
	for(j=(*(ca+0)+1);j<strlen(cat);j++){
		if(cat[j]=='/'){
			
			ca[1]=j;

			break;
			
		}			
	 printf("%d\n",ca[1]);  }
/*	for(int i=j+1;i<j;i++){
		ca[j+1]=cat[j+1];
	
   // printf(" coucou %s ",ca);
}	*/


	return 0;
}
