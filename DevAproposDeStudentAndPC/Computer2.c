#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "etude.h"
//#define taille 45
int main(){

   
 study*st=malloc(sizeof(study)*60);;
	FILE*fic=NULL;
	fic=fopen("PC.csv","a+");
	FILE*file=NULL;
	file=fopen("compt.csv","w+");
	
	//entreinfo(st,fic);
        if(file==NULL){
	       exit(1);
        }
        if(fic==NULL){
	       exit(1);
        }
 	//fputs("Nom\tPrenom\tDateDeNaissance\ttaille\tAdresse\tParcours\n",file);
	char**car=(char**)malloc(sizeof(char*)*100);
	       for(int i=0;i<100;i++){
			   car[i]=malloc(sizeof(char)*255);
		   }
		  
		    printf("Entrez le nombre de PC que vous voulez ajouter dans le fichier:");
		     int len=length();
		     
		     entreInfoPc(st,fic,len);
             int ligne=nombreDeligne(fic);

		     fclose(fic);
		     FILE*fice=NULL;
	         fice=fopen("PC.csv","r");
		     
			  car=mamindravaleur(fice);
			  for(int i=0;i<(ligne+len);i++){
			  printf(" %d and %s\n",i,car[i]);
		      }
		      triage2(st,file,car,len,ligne);
	          
	
    fclose(file);
    fclose(fice);



return 0;
}
