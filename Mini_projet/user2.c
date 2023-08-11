#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#
int main(){
	srand(time(NULL));
	FILE*file,*fich;
	file=fopen("/etc/passwd","r");
	fich=fopen("etc_passwd.csv","w+");
	char*t;
	t=malloc(255);
	;
	char**car;
	car=malloc(255*sizeof(char*));
	for(int j=0;j<255;j++){
		car[j]=malloc(255);
	}
	char l[50];

	char s[200];
	
	char r[100];
	int uid,gid;
	

	if(file==NULL){
		exit(1);
	}
	if(fich==NULL){
		exit(1);
	}
	int i;
    fputs("USER\tDIR\tShell\tEmail\tMot de passe\n",fich);
	for(i=0;feof(file)!=1;i++){
		fgets(car[i],255,file);
		sscanf(car[i],"%[^:]:%*[^:]:%d:%d:%*[^:]:%[^:]:%[^\n]\n",r,&uid,&gid,l,s);
		if((uid >=1000 && gid >=1000 && uid<2000 && gid<2000)){
			if(!feof(file)){
				int passwd=(rand()%1000000+1000);
				if(passwd<1000)passwd+=1000;

				strcpy(t,r);
				strcat(t,"@mit.mg");
				fprintf(fich,"%s\t%s\t%s\t%s\t%d\n",r,l,s,t,passwd);
				
		}
	}
				
    }
	
	fclose(file);
	fclose (fich);
	
	
	return 0;
}
