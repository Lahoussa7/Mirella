#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int valeur;
	
	
	char** unit;
	char* dizaine;
	char* centaine;
	char* isa;

/*	isa=malloc(11);
	dizaine=malloc(10);
	centaine=malloc(10);
		unit=(char**)malloc(11);
	
	for(int i=0;i<11;i++){
		unit[i]=malloc(11);
	}*/
	scanf("%d",&valeur);
	unit[11][11]={"","iray","roa","telo","efatra","dimy","enina","fito","valo","sivy"};
	if(valeur==1){
		strcat(isa,"iray");
	}
	if(valeur==2){
		strcat(isa,"roa");
	}
	//if(valeur==3)
 return 0;
}
