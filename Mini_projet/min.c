#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int nbr_choisi,j=7;
	int nbr_saisi;
	const int min=0 ,max=100;
	srand(time(NULL));
	
	//nbr_choisi=(rand()%(max-min +1))+min;
	
	
		nbr_choisi=(rand()%(max-min +1))+min;
	
		//printf("%d\n",nbr_choisi);
	do{
	printf("saisir le nonbre aleatoire\n");
	scanf("%d",&nbr_saisi);
		j--;
	
	if(nbr_saisi<nbr_choisi){
		printf("c'est plus de ce nombre %d coups\n",j);
    }
		else if(nbr_saisi>nbr_choisi){
			printf("c'est encore plus petit de ce nombre %d coups\n",j);
		}
			else /*(nbr_saisi==nbr_choisi)*/{
				printf("bravo tu as gagne !!!\n");
					
	}
			}while(nbr_choisi!=nbr_saisi && j!=0);
			//printf("vous l'avez fait a %d coup\n",j);
				return 0;
}
				
