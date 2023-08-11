#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void condition( int choix, char *n,char *t,char *s,char *d,char *r,char *k,char *g,char *f);

int main(){
	int choix;
	do{
	printf("\t\t\n");
	printf("[1] pour lister ce qu'il a dans le repertoire\n");
	printf("[2] vous pouvez créer un fichier si vous  met (.c) vous pouvez le compiler, s'il n'y en a pas vous pouvez seulement le voir ce que vous avez ecrit\n");
	
	printf("[3] pour pouvoir le compiler\n");
	printf("[4] pour seulement voir les fichier \n");
	printf("[5] pour pouvoir l'executer si le fichier contient le (.c)\n");
	printf("[6] pour effacer le fichier que vous venez de creer ou les autres fichier\n");
	printf("[7] pour quitter\n");
	scanf("%d",&choix);
	system("clear");
	char n[10]="nano";
	char t[10];
	char s[10]="cat";
	char d[40]="gcc";
	char r[30];
	char k[10]="-o";
	
	char g[10]="./";
	char f[10]="rm";
	
	condition(choix,n,t,s,d,r,k,g,f);

	/*switch(choix){
		case 1:
			system("ls");
		break;
		case 2:
		printf("entrez le nom que vous voulez de votre fichier\n");
		scanf("%s",t);
		strcat(n," ");
		strcat(n,t);
		system(n);
		break;
		case 3:
			printf("entrez encore le nom de votre fichier pourqu'on puisse le compiler\n");
			scanf("%s",t);
			printf("le nom pour le compiler sans (.c)\n");
			scanf("%s",r);
			strcat(d," ");
			strcat(d,t);
			strcat(d," ");
			strcat(d,k);
			strcat(d," ");
			strcat(d,r);
			printf("votre fichier a bien été compiler :)!!\n");
			system(d);
	
		break;
		case 4:
			printf(" entrez le nom de votre fichier\n");
			scanf("%s",t);
		strcat(s," ");
		strcat(s,t);
		system(s);
		break;
		case 5:
			printf("\t\t");
			printf("entrez de nouveau le nom de l'execution\n");
			scanf("%s",r);
			strcat(g,r);
			system(g);
		break;
	    case 6:
			printf("entrez de nouveau le nom de votre fichier que vous souhaitez effacer\n");
			scanf("%s",t);
			strcat(f," ");
			strcat(f,t);
			system(f);
			printf("votre fichier a bien été effacer\n");
        break;
        case 7:
			printf("au revoir vous avez quitter le programme\n");
        break;
	    }*/
	    
   }
   while(choix!=7);
   
	    return 0;
}
void condition( int choix ,char *n,char *t,char *s,char *d,char *r,char *k,char *g,char *f){    

		switch(choix){
		case 1:
			system("ls");
		break;
		case 2:
		printf("entrez le nom que vous voulez de votre fichier\n");
		scanf("%s",t);
		strcat(n," ");
		strcat(n,t);
		system(n);
		break;
		case 3:
		printf("entrez encore le nom de votre fichier pourqu'on puisse le compiler\n");
		scanf("%s",t);
		printf("le nom pour le compiler sans (.c)\n");
		scanf("%s",r);
		strcat(d," ");
		strcat(d,t);
		strcat(d," ");
		strcat(d,k);
		strcat(d," ");
	        strcat(d,r);
		printf("votre fichier a bien été compiler :)!!\n");
		system(d);
	
		break;
		case 4:
			printf(" entrez le nom de votre fichier\n");
			scanf("%s",t);
		strcat(s," ");
		strcat(s,t);
		system(s);
		break;
		case 5:
			printf("\t\t");
			printf("entrez de nouveau le nom de l'execution\n");
			scanf("%s",r);
			strcat(g,r);
			system(g);
		break;
	    case 6:
			printf("entrez de nouveau le nom de votre fichier\n");
			scanf("%s",t);
			strcat(f," ");
			strcat(f,t);
			system(f);
			printf("votre fichier a bien été effacer\n");
        break;
        case 7:
			printf("au revoir vous avez quitter le programme\n");
        break;
	    }
}
