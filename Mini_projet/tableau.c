#include<stdio.h> 
 void Entrertab(int* tab);
 void traitement(int* tab);
 void Tritab( int *tab);
 void AfficheTab( int *tab);
 //void TriHeritiana(int *tab);
 //void AfficheTabHeritiana(int *tab);
int main(){
	printf("voici un tableau qui remet les nombres par ordre decroissant\n");
	int tab[10]={};
	
	 Entrertab(tab);
	 traitement(tab);
	 Tritab(tab);
	 AfficheTab(tab);
	//TriHeritiana(tab);
	//AfficheTabHeritiana(tab);

		return 0;
}
void Entrertab(int* tab){
    for(int i=0;i<10;i++){
		printf("entrez un valeur [%d] du tableau\n",i);
		scanf("%d",&tab[i]);
	}
}
void traitement(int* tab){
	for(int i=0;i<10;i++){
	printf("tab[%d]=%d\n", i, *(tab+i) );


	}
}
void Tritab( int *tab){
	for(int i=0;i<10;i++){
		for(int j=i+1;j<10;j++){
			int tmp;
			if(tab[i]<tab[j]){
				tmp=tab[i];
				tab[i]=tab[j];
				tab[j]=tmp;
			}
		}	
	}
}
void AfficheTab( int *tab){
	
	
	
	for(int i=0;i<10;i++){
		printf("les nouvelles valeur des élément sont:%d\n",tab[i]);
	}
}		
/*void TriHeritiana(int *tab){
	int i,j,tmp;
	for(i=0;i<10;i++){
		for(j=0;j<10-1;j++){
			if((tab[j])< (tab[j+1])){
				tmp=(tab[j]);
				(tab[j])=(tab[j+1]);
				(tab[j+1])=tmp;
			}
		}
	}
}
void AfficheTabHeritiana(int *tab){	
	for(int i=0;i<10;i++){
		printf("les nouvelles éléments sont:%d\n",tab[i]);
	}
}*/				
				

