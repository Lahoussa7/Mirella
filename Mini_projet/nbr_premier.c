#include<stdio.h>
#include<math.h>
int main(){
	int a,b,s;
	int* p=&a;
	printf(" savoir si le nombre premier est premier ou non\n");
	while(a!=0){
	printf("entrez a:\n");
	scanf("%d",p);
	for(b=1,s=0;a>=b;b++){
		if(a%b==0){ s+=b;
		}
	}
		
		if(a+1==s){
			printf("c'est %d mombre premier\n",*p);
	    
		}	else {
				printf("c'est un nombre simple\n");
	        }
	     }
		
     return 0;	
}