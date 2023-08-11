#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define t 45
typedef struct Student{
    char nom[100];
    char prenom[400];
    char datenaiss[400];
    char adresse[500];
    char tel[500];
    char genre[200];
    char parcours[400];
    char mail[200];
    
}study;
int main(){
	study st[t];
	FILE*fic=NULL;
	FILE*file=NULL;
	fic=fopen("Studies.csv","r");
	file=fopen("Etu.csv","w+");
	//fputs("Nom\tPrenom\tDateDeNaissance\ttaille\tAdresse\tParcours\n",fic);
	char**car=malloc(sizeof(char*)*100);
	       for(int i=0;i<100;i++){
			   car[i]=malloc(255);
		   }
	char**ca=malloc(sizeof(char*)*100);
	       for(int i=0;i<100;i++){
			   ca[i]=malloc(255);
		   }
		   
	for(int i=0;feof(fic)!=1;i++){
		fgets(car[i],255,fic);
		//sscanf(car[i],"%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],",st[i].nom,st[i].prenom,st[i].datenaiss,st[i].adresse,st[i].tel,st[i].genre,st[i].parcours,st[i].mail);
		//sprintf(ca[i],"%s,%s,%s,%s,%s,%s,%s,",st[i].nom,st[i].prenom,st[i].datenaiss,st[i].adresse,st[i].tel,st[i].genre,st[i].parcours);
		//printf("%d %s\n",i,st[i].mail);
		
	}
						char tmp[100];
	for(int i=1;i<45;i++){
			for(int j=i+1;j<45;j++){
				if(strcmp(car[i],car[j])>0){

					strcpy(tmp,car[i]);
					strcpy(car[i],car[j]);
					strcpy(car[j],tmp);
					
		        	/*strcpy(tmp,st[i].mail);
					strcpy(st[i].mail,st[j].mail);
					strcpy(st[j].mail,tmp);*/
				}
				
		    } //strcat(ca[i],st[i].mail);
		    printf("%s\n",car[i]);
		   
		    sscanf(car[i],"%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],",st[i].nom,st[i].prenom,st[i].datenaiss,st[i].adresse,st[i].tel,st[i].genre,st[i].parcours,st[i].mail);// printf("%d %s\n",i,car[i]); 
		    	
		    fprintf(file,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",st[i].nom,st[i].prenom,st[i].datenaiss,st[i].adresse,st[i].tel,st[i].genre,st[i].parcours,st[i].mail);//strcpy(ca[i],car[i]); 
    }
     
    
  /* for(int i=1;feof(fic)!=1;i++){
	   printf("ici");
	   sscanf(ca[i],"%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],",st[i].nom,st[i].prenom,st[i].datenaiss,st[i].adresse,st[i].tel,st[i].genre,st[i].parcours);
	   

	   
	   //
	 //  fprintf(file,"%s\t%s\t%s\t%s\t%s\t%s\t%s\n",st[i].nom,st[i].prenom,st[i].datenaiss,st[i].adresse,st[i].tel,st[i].genre,st[i].parcours);
		//printf("%s\n",st[k].nom);
	}
	for(int j=0;j<t;j++){
		
	printf("l'informations de l'élève n°%d:\n",j); 
	printf("entrez votre nom de ma famille:");
	scanf("%s",st[j].nom);
	
	printf("entrez votre prénom :");
	scanf("%s",st[j].prenom);

	printf("donnez votre date de naissance:");
	scanf("%s",st[j].datenaiss);

	printf("donnez votre taille:");
	scanf("%s",st[j].taille);

	printf("donnez votre adresse:");
	scanf("%s",st[j].adresse);

	printf("quel ecole frequentez vous:");
	scanf("%s",st[j].ecole);

	 }
	 int i;
	 i=0;
	 while(i<t){
		 fprintf(fic,"%s\t%s\t%s\t%s\t%s\t%s\n",st[i].nom,st[i].prenom,st[i].datenaiss,st[i].taille,st[i].adresse,st[i].ecole);
	
		 i++;
	 }*/
	fclose(fic);
	fclose(file);
	return 0;
}
