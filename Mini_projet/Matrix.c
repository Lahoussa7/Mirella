#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){
	int tab[1][4]={
		{1, 2, 4, 1}

	};
	int s;
	
	s=0;
 //int j=0;
	for(int i=0;i<1;i++){
		for(int j=0;j<4;j++){
		
				if((i+1)<1 && tab[i][j]==0){
					tab[i+1][j]=0;
					
				}
				else{
				s+=tab[i][j];
			}
		}
	}
	printf("%d",s);			
	
	
  return 0;	
}
