#include<stdio.h>
#include<math.h>
int main(){	int tab[5]={};
	int a,b,q,r,t,p,j;
	b=2; 
	int tmp[5];
do{	
	printf("entrez un nombre a\n");
	scanf("%d",&a);
	
		 for(int j=0;a>0;j++){
			
			q=a/b;
		    tab[j]=a-(q*b);
			
	        a=q;
	        
	      //  printf("%d",tab[j]);
	        }

	      /* for(int j=0;j<5;j++){
	       	for(int i=j+1;i<5;i++){
	      	if(tab[j]==tab[i])
	     	{
	       		
	       	
	          tmp[5]=tab[j];
	         tab[j]=tab[i];
	         tab[i]=tmp[5];
	        	}
	        	}
	        	//printf("[%d]\n",i);
	            printf("%d",tab[j]);
	        	}
		
		/*	
			t=r;
			m=t/p;
			j=t-(m*p);
			
			t=m;
			
		printf("%d",j
			);*/
	        	for(int j=j-1;j<=0;j--){
	        		printf("%d",tab[j]);
	        		}
		
		}while(q!=0);
	
		return 0;}
	
