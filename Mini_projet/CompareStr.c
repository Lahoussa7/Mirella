#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

	char car[4][50]={"acc","eeeeeee","abc","wwwwwww"};
	char t='c';
    printf("%c",t);

		char**ca=malloc(sizeof(char*)*4);
		for(int j=0;j<4;j++){
			ca[j]=malloc(10);
		}
		char c[4][50];
		int s=sizeof(car)/sizeof(car[0]);	
	 for(int i=0;i<s;i++){
		for(int j=i+1;j<s;j++){
			if(strlen(car[i]) < strlen(car[j])){
				strcpy(ca[i],car[j]);
				strcpy(car[j],car[i]);
				strcpy(car[i],ca[i]);
				}
			}
       }
       int l=0;
    for(int i=0;i<s;i++){
	       if(strlen(car[i])==strlen(car[0])){
		     strcpy(c[i],car[i]);
		     l++;
	       }
	         printf("%s     and %d\n",c[i],l);
	}
    return 0;
}
