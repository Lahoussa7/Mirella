#include <stdio.h>
#include <stdlib.h>
char* entreValFile(int n,FILE*file);
int main(){
	FILE*file;
	char*t;
	t=malloc(256);
	int n=0;
	file=fopen("test.txt","a+");
	if(file==NULL){
		exit(1);
	}
	printf("entrez une texte\n");
	t=entreValFile(n,file);
	
	/*while(n<4){	
	fgets(t,256,stdin);
	n++;
     
	if(t){
		fprintf(file,"%s",t);
	}
   }*/
	printf("%s",t);
	fclose(file);
	
	return 0;
}
char* entreValFile(int n,FILE*file){
	
	char*t;
	t=malloc(256);
	file=fopen("test.txt","a+");
	if(file==NULL){
		exit(1);
	}
	while(n<4){	
	fgets(t,256,stdin);
	n++;
     
	if(t){
		fprintf(file,"%s",t);
	}
   }
	
	fclose(file);
	return t;
}
	
	
	
