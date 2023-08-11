#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "etude.h"
//#define taille 
int main(){
	study*st=malloc(sizeof(study)*60);;
	FILE*fice=NULL;
	fice=fopen("Studies.csv","a+");
	FILE*file=NULL;
	file=fopen("studen.csv","w+");
	char**car=(char**)malloc(sizeof(char*)*100);
	       for(int i=0;i<100;i++){
			   car[i]=malloc(sizeof(char)*255);
		   } 
		   int len=0;
	       printf("combien d'eleve voulez vous entrer:");
              len=length();
              
		      entreinfo(st,fice,len);
		     int ligne=nombreDeligne(fice);
		      
		     fclose(fice);
		     FILE*fic=NULL;
		     fic=fopen("Studies.csv","r");
		     
             car=mamindravaleur(fic);
		     triage(file,car,st,len,ligne);   
		    
	fclose(fic);
	fclose(file);
	return 0;
}
