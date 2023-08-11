#include <stdio.h>
#include <stdlib.h>
int main(){
 int max,min,n,h;
    max=0;
    min=100;
    n=0;
    h=0;
    
    int ta[2]={3,6};
    int m=0;
    
    int*tab=(int*)malloc(sizeof(int)*max);
    for(int i=0;i<2;i++){
        n=ta[i];
      m++;
     if(max<n){
         max=n;
       
	 }
     } for(int j=0;j<2;j++){
         h=ta[j];
     if(min>h){
         min=h;
         
     } 
    } printf("\n%d ee %d %d",min,max,m);
      int j=0; 
    if(min<100){
		printf("\n%d\n",max);
           
    
       while(min<=max){
           tab[j]=min;
           printf("%d",tab[j]);
         min++; j++;  
       }
    
}     printf("\t%d",j-m);
    return 0;
}
