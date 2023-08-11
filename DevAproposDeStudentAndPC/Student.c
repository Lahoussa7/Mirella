#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "etude.h"
//#define taille 45
/*typedef struct Student{
    char nom[100];
    char prenom[400];
    char datenaiss[400];
    char adresse[500];
    char tel[500];
    char genre[200];
    char parcours[400];
    char marque[200];
    char ethiquette[200];
    char mac[200];
    
}study;
study*entreinfo(study st[t],FILE*fic);
char**mamindravaleur(FILE*fic);
study*triage(FILE*file,char**car,study st[t]);
char**makaetiquette(study st[t],FILE*file);
 void cara(study st[t],FILE*file,int j);
study*triage2(study*st,FILE*file);*/
study*entreinfo(study*st,FILE*fic,int len){
	//fic=fopen("etudiant.csv","a+");
	
	for(int j=1;j<len;j++){
		
	printf("l'informations de l'élève n°%d:\n",j); 
	printf("entrez votre nom de ma famille:");
	scanf("%s",st[j].nom);
	
	printf("entrez votre prénom :");
	getchar();
	fgets(st[j].prenom,234,stdin);
	st[j].prenom[strcspn(st[j].prenom,"\n")]='\0';
	
	printf("donnez votre date de naissance:");
	scanf("%s",st[j].datenaiss);

	printf("donnez votre Adresse:");
	getchar();
	fgets(st[j].adresse,234,stdin);
	st[j].adresse[strcspn(st[j].adresse,"\n")]='\0';
    printf("Entrez votre numero de telephone:");
    scanf("%s",st[j].tel);
	printf("Vous êtes un Homme ou une Femme:");
	scanf("%s",st[j].genre);

	printf("quel ecole frequentez vous:");
	scanf("%s",st[j].parcours);
	printf("Entrez votre adresse E-mail:");
	scanf("%s",st[j].mail);
	printf("Entrez votre URL sur Github:");
	scanf("%s",st[j].git);
     fprintf(fic,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",st[j].nom,st[j].prenom,st[j].datenaiss,st[j].adresse,st[j].tel,st[j].genre,st[j].parcours,st[j].mail,st[j].git);
	 }
	/* int i;
	 i=0;
	 while(i<taille){
		 fprintf(fic,"%s\t%s\t%s\t%s\t%s\t%s\t%s\n",st[i].nom,st[i].prenom,st[i].datenaiss,st[i].adresse,st[i].tel,st[i].genre,st[i].parcours);
		char chaine[2550];
		sprintf(chaine,"%s\t%s\t%s\t%s\t%s\t%s\t%s",st[i].nom,st[i].prenom,st[i].datenaiss,st[i].adresse,st[i].tel,st[i].genre,st[i].parcours);
		fputs(chaine,fic);
		 i++;
	 }*/
	
	//fclose(fic);
	return st;
}
char**mamindravaleur(FILE*fic1){
	//fic=fopen("etudiant.csv","r");
	char**car=malloc(sizeof(char*)*100);
	    for(int i=0;i<100;i++){
			   car[i]=malloc(255);
	    }
        for(int i=0;feof(fic1)!=1;i++){
		fgets(car[i],255,fic1);
       // printf("%s",car[i]);
	    }
		   
return car;
}
study*triage(FILE*file,char**car,study*st,int len,int ligne){
	//file=fopen("student1.csv","w+");
	char tmp[255];
	
	
	fputs("Nom\tPrenom\tDateDeNaissance\tAdresse\tTelephone\tGenre\tParcours\tE-mail\tURL-Github\n",file);
	for(int i=1;i<(ligne+len);i++){
			for(int j=i+1;j<(ligne+len);j++){
				if(strcmp(car[i],car[j])>0){
					strcpy(tmp,car[i]);
					strcpy(car[i],car[j]);
					strcpy(car[j],tmp);
		        }	
		    } //strcpy(ca[i],car[i]); 
		        printf("%s",car[i]);
		        sscanf(car[i],"%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]",st[i].nom,st[i].prenom,st[i].datenaiss,st[i].adresse,st[i].tel,st[i].genre,st[i].parcours,st[i].mail,st[i].git);// printf("%d %s\n",i,car[i]); 
		    	 
		        fprintf(file,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",st[i].nom,st[i].prenom,st[i].datenaiss,st[i].adresse,st[i].tel,st[i].genre,st[i].parcours,st[i].mail,st[i].git);//strcpy(ca[i],car[i]); 
    }
	//fclose(file);
return st;	
}
study*decoupage(study*st,char**car,char**ca){
	for(int i=0;i<100;i++){
	 sscanf(car[i],"%[^,],%[^,],%[^,],",st[i].mar,st[i].eti,st[i].mac);	
	 strcpy(ca[i],st[i].eti);
}
	return st;
}
study*triage2(study*st,FILE*fic,char**t,int len,int ligne){
	char tmp[100];
	//FILE*fic=NULL;
	//fic=fopen("P1.csv","w+");
	char**ta=malloc(sizeof(char*)*100);
	   for(int i=0;i<100;i++){
		  ta[i]=malloc(255);
	   }  
	   for(int i=0;i<(ligne+len);i++){
            sscanf(t[i],"%[^,],%[^,],%[^\n]",st[i].mar,ta[i],st[i].mac);
        
       // printf(" %d and %s\n",i,(st+i)->mac);
	
	     }
	   fputs("Marque\tEtiquette\t Adresse Mac\n",fic);
	   for(int i=1;i<(ligne+len);i++){
		  for(int j=i+1;j<(ligne+len);j++){
				if(strcmp(ta[i],ta[j])>0){
				    strcpy(tmp,ta[i]);
				    strcpy(ta[i],ta[j]);
				    strcpy(ta[j],tmp);

				    strcpy(tmp,st[i].mac);
				    strcpy(st[i].mac,st[j].mac);
				    strcpy(st[j].mac,tmp);

				    strcpy(tmp,(st+i)->mar);
				    strcpy((st+i)->mar,(st+j)->mar);
				    strcpy((st+j)->mar,tmp);
		        }

		}            strcpy(st[i].eti,ta[i]);
		             printf(" %s and %d\n",ta[i],i);
		             fprintf(fic,"%s\t%s\t%s\n",st[i].mar,st[i].eti,st[i].mac);
		//printf("%s\n",(st+i)->marque);
	
	}
	
    return st;
} 
char**makaetiquette(study*st,FILE*file){
	
	    char**t=malloc(sizeof(char*)*100);
	          for(int i=0;i<100;i++){
		       t[i]=malloc(255);
	          }
	  	char**ta=malloc(sizeof(char*)*100);
	          for(int i=0;i<100;i++){
		        ta[i]=malloc(255);
	           }
	
	          for(int i=0;feof(file)!=1;i++){
		           fgets(t[i],255,file);
               }
return t;

}  
void entreInfoPc(study*st,FILE*file,int len){
     int j=1;
	for(int i=0;i<len;i++,j++){
	    printf("entrez la marque de votre PC n° %d:",j);	
	    scanf("%s",st[i].mar);
	//,50,stdin);
	    printf("entrez l'ethiquette de votre PC:");
	    scanf("%s",st[i].eti);//,50,stdin);
	    printf("entrez votre adresse mac:");
	 //fgets(st[i].mac,50,stdin);
	    scanf("%s",st[i].mac);
	
	    fprintf(file,"%s\t%s\t%s\n",st[i].mar,st[i].eti,st[i].mac);
	
    }
	/*int nbrligne=0;
	rewind(file);
	char c=fgetc(file);
    while(c!=EOF){
		if(c=='\n')nbrligne++;
		c=fgetc(file);
	}
	     ligne=nbrligne;
	rewind(file);
	printf("ligne du fichier=%d\n",nbrligne);*/
} 
int nombreDeligne(FILE*file){
	int nbrligne=0;
	rewind(file);
	char c=fgetc(file);
    while(c!=EOF){
		if(c=='\n')nbrligne++;
		c=fgetc(file);
	}
	     
	//rewind(file);
	printf("ligne du fichier=%d\n",nbrligne);
	return nbrligne;
}
	
int length(){
	int t;
	t=1;
	scanf("%d",&t);	
	return t;
}	
