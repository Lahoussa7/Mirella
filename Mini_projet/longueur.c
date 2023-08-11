#include <stdio.h>
#include <string.h>
int main (){
	char s[69]="les fraises sont perchers" " sur le tabouret de mon grand_pere";
	printf("%s\n",s);
	int i=0;
	
 while(s[i]!='\0'){
	 
	printf("%c",s[i++]);
	
}   //printf("%d\n",i);

 /* for(int i=1;i<strlen(s);i++){
	  
		  
	}*/
  printf("%c",s[strlen(s)-3]);
 
	return 0;
}
