#include <stdio.h>
void intervalle(int n1, int n2);
int getchoice();

int main(){
	int choice=0;
	printf("Imaginer un nombre entre 1 et 100\nCe programme va deviner ce nombre");
	intervalle(1,50);
	choice=getchoice();
	if(choice){
		intervalle(1,25);
		choice=getchoice();
		if(choice){
			intervalle(1,18);
			choice=getchoice();
			if(choice){
					intervalle(1,9);
					choice=getchoice();
					if(choice){
						intervalle(1,5);
						choice=getchoice();
						if(choice){
								intervalle(1,2);
								choice=getchoice();
								if(choice){
									printf("Votre nombre est il 1?\noui ou non");
									choice=getchoice();
									if(choice){
										printf("Votre nombre est 1\n");
									}
									else {
										printf("Votre nombre est 2");
									}
									
								}
							}	
						}
					}
					
			}
		}
	
	return 0;
}


void intervalle(int n1, int n2){
	
	printf("ce nombre est il enter %d et %d\n",n1,n2);
	printf("saisir 1 pour \"oui\" et 0 pour \"non\": ");
	
}

int getchoice(){
	int choice =0;
	scanf("%d: \n",&choice);
	return choice;
}
