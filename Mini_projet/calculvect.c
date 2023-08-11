#include <stdio.h>
#include <stdlib.h>
//#include "prodScal.h"
int*tabb1();
int main(){
	int*tab1=malloc(sizeof(int)*3);
	int*tab2=malloc(sizeof(int)*3);
	tabb1();
	
	return 0;
}
int mampiditra
int*tabb1(){
	int*tab1=malloc(sizeof(int)*3);
	for(int i=0;i<3;i++){
		printf("tab1[%d]\n",i);
		scanf("%d",(tab1+i));
	}
	return tab1;
}
