#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "caracteristique.h"
#define taille 10


typedef struct {
	char marque[50];
	char ethiquette[50];
	char mac[50];
}Pc;
void triage(Pc computer[taille],int n,char**ta);
char**makaetiquette(Pc computer[taille],FILE*file,char**ta);
void cara(Pc computer[taille],FILE*file,int j);
int main(){
	Pc computer[taille];
	FILE*file=NULL;
	//int j=1;
	int n=0;
	n=sizeof(*computer)/sizeof(computer[0].ethiquette);
	char**ta=malloc(sizeof(char*)*40);
	 for(int i=0;i<40;i++){
		  ta[i]=malloc(255);
	  }
	char**tai=malloc(sizeof(char*)*40);
	 for(int i=0;i<40;i++){
		  tai[i]=malloc(255);
	  }
	//file=fopen("PC.csv","a+");
	
	// fputs("Marque\tEtiquette\t Adresse Mac\n",file);
	
	/*for(int i=0;i<taille;i++,j++){
	printf("entrez la marque de votre PC n° %d:",j);	
	scanf("%s",computer[i].marque);//,50,stdin);
	printf("entrez l'ethiquette de votre Pc:");
	scanf("%s",computer[i].ethiquette);//,50,stdin);
	printf("entrez votre adresse mac:");
	//fgets(computer[i].mac,50,stdin);
	scanf("%s",computer[i].mac);
	
	fprintf(file,"%s\t%s\t%s\n",computer[i].marque,computer[i].ethiquette,computer[i].mac);
    }*/
	//cara(computer,file,j);
	////fclose(file);

	//for(int i=0;i<strlen(*ta);i++){
   tai=makaetiquette(computer,file,ta);
   triage(computer,n,ta);

	return 0;
}
void cara(Pc computer[taille],FILE*file,int j){
/*	computer={
		.marque={"Panasonic"},
		.ethiquette={"Mirella-8"},
		.mac={"fgh"};
	};*/
			
	file=fopen("PC.csv","a+");
	for(int i=0;i<taille;i++,j++){
	printf("entrez la marque de votre PC n° %d:",j);	
	scanf("%s",computer[i].marque);
	//,50,stdin);
	printf("entrez l'ethiquette de votre Pc:");
	scanf("%s",computer[i].ethiquette);//,50,stdin);
	printf("entrez votre adresse mac:");
	//fgets(computer[i].mac,50,stdin);
	scanf("%s",computer[i].mac);
	
	fprintf(file,"%s\t%s\t%s\n",computer[i].marque,computer[i].ethiquette,computer[i].mac);
	
    }
    fclose(file);
}
char**makaetiquette(Pc computer[taille],FILE*file,char**ta){
	//char**tab=malloc(500,255);
	char**t=malloc(sizeof(char*)*40);
	  for(int i=0;i<40;i++){
		  t[i]=malloc(255);
	  }
	file=fopen("PC.csv","r");
	for(int i=0;feof(file)!=1;i++){
		fgets(t[i],255,file);
		sscanf(t[i],"%[^,],%[^,],%[^,]",computer[i].marque,ta[i],computer[i].mac);
		//printf("%s\n",ta[i]);
	}
	fclose(file);
 return t;

}
void triage(Pc computer[taille],int n,char**ta){
	char tmp[34];
    
		
			for(int i=0;i<strlen(*ta);i++){
		for(int j=i+1;j<strlen(*ta);j++){
			if(strcmp(ta[i],ta[j])>0){
				strcpy(tmp,ta[i]);
				strcpy(ta[i],ta[j]);
				strcpy(ta[j],tmp);
		    }
		}//printf("%s\n",t[i]);
	
	}
		
	
	for(int i=0;i<strlen(*ta);i++)
		printf("%s\n",ta[i]);
	
}
		//printf("bonjour");

	

