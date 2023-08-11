#include <stdio.h>
#include <stdlib.h>
int main(){
  int tab[6]={100,5,67,98,2};
 int i,j,max,m;
 max=-1234;m=6456;
 i=0;
 j=i;
  int*ta=(int*)malloc(sizeof(int)*j);
  for(i=0;i<6;i++){
	  
	  if(tab[i]>tab[i+1] && tab[i+1]>tab[i+2]){
		  
		  max=tab[i];break;
	  }
	   j++;
  }	printf("%d\n",max);	 
     for(int j=6;j>=0;j--){
		 if(tab[j]>max){
			 m=tab[j];
		 }
	 }printf("%d\n",m);	 
	 
		 
		  



    return 0;
}
