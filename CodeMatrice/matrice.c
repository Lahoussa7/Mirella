#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int**tableau(int taille,int length);
int**tableau1(int taille,int length);
void affich1(int**ta,int taille,int length);
void affich(int**t,int taille,int length);
int**calAddmat(int**ta,int**t,int taille,int length);
int**prodMatrice(int**t,int**ta,int taille,int length);
void affichmat(int**t1,int taille);
void transposer(int**ta,int taille,int length);
int determinant(int taille,int length,int**ta);
int main(){
	                                         ///commencement du programme :D
	int taille,length;
	
	taille=3;
	length=3;
	int**ta;
	
	ta=(int**)malloc(sizeof(int*)*taille);
	for(int i=0;i<length;i++){
		ta[i]=malloc(sizeof(int)*length);
	}
	ta=tableau(taille,length);
	  affich1(ta,taille,length);
	 
	int**t;
	t=(int**)malloc(sizeof(int*)*taille);
	for(int i=0;i<length;i++){
		t[i]=malloc(sizeof(int)*length);
		
	} t=tableau1(taille,length);
	  affich(t,taille,length);
	  int**ta1;
	  ta1=(int**)malloc(sizeof(int*)*taille);
	for(int i=0;i<length;i++){
		ta1[i]=malloc(sizeof(int)*length);
		
	} 
	
      //ta1=calAddmat(ta,t,taille,length);
      int**t1;
	  t1=(int**)malloc(sizeof(int*)*taille);
	  for(int i=0;i<length;i++){
		t1[i]=malloc(sizeof(int)*length);
		
	   printf("\n");
	}t1=prodMatrice(t,ta,taille,length);
	 affichmat(t1,taille);
	 //transposer(ta,taille,length);
	 //int l= determinant(taille,length,ta);
	// printf("%d",l);
  
	return 0;
}
/// Les prototypes du fonction necessaire pour calculer le produit d'un matrice et son somme XD
int**calAddmat(int**ta,int**t,int taille,int length){
	int**ta1;
	
	ta1=(int**)malloc(sizeof(int*)*taille);
	for(int i=0;i<length;i++){
		ta1[i]=malloc(sizeof(int)*length);   //calcule la somme d'une matrice
	}
	for(int i=0;i<taille;i++){
		for(int k=0;k<length;k++){
			
				ta1[i][k]=ta[i][k]+t[i][k];
		    		   
		}
				
     }
	return ta1;
}
int**tableau(int taille,int length){
	int**ta=(int**)malloc(sizeof(int*)*taille);
	for(int i=0;i<length;i++){
	ta[i]=malloc(sizeof(int)*length);
	}
	for (int i=0;i<taille;i++){
		for(int j=0;j<length;j++){
			printf(" [%d][%d]\n",i,j);
			scanf("%d",&ta[i][j]);
	    }
	}
	return ta;
}
void affich1(int**ta,int taille,int length){
    for(int i=0;i<taille;i++){
		for(int j=0;j<length;j++){
		printf(" %d ",ta[i][j]);
		
	    }
      printf("\n");
    }
}
int**tableau1(int taille,int length){
	int**t=(int**)malloc(sizeof(int*)*taille);
	for(int i=0;i<length;i++){
		t[i]=malloc(sizeof(int)*length);
	}
	for (int i=0;i<taille;i++){
		for(int j=0;j<length;j++){
			printf(" [%d][%d]\n",i,j);
			scanf("%d",&t[i][j]);
	    }
	}
	return t;
}
void affich(int**t,int taille,int length){
    for(int i=0;i<taille;i++){
		for(int j=0;j<length;j++){
			printf("%d ",*(*(t+i)+j));
		
	    }
           printf("\n");  
    }
}
int**prodMatrice(int**t,int**ta,int taille,int length){
	int**t1=(int**)malloc(sizeof(int*)*taille);
	for(int i=0;i<length;i++){
		t1[i]=malloc(sizeof(int)*length);
	}
	   for(int i=0;i<taille;i++){                  //calcule le produit d'un matrice
		  
		for(int j=0;j<length;j++){
			 t1[i][j]=0;
			for(int n=0;n<length;n++){
				
				t1[i][j]+=ta[i][n]*t[n][j];

			}				
		}
		//
	}
	

		return t1;
}
void affichmat(int**t1,int taille){
	for(int i=0;i<taille;i++){
		for(int j=0;j<taille;j++){
			printf(" %02d ",t1[i][j]);
		}
		printf("\n");
	}
}
void transposer(int**ta,int taille,int length){
	int**tmp=(int**)malloc(sizeof(int*)*taille);
	for(int i=0;i<length;i++){
		tmp[i]=malloc(sizeof(int)*length);
	}
  for(int i=0;i<taille;i++){
	  for(int j=0;j<length;j++){

       tmp[i][j]=ta[j][i];
       
		     //printf(" %d ",tmp[i][j]);
		
		
		
	}
	printf("\n");
}
return ;
}
int determinant(int taille,int length,int**ta){
	int s; int l;
	l=0;
	s=0;
	
		for(int i=0;i<taille;i++){
	       for(int j=0;j<=(length+1);j++){
			  ta[i][j]=ta[i][(j%3)];
		  
	  	       printf(" %d ",ta[i][j]);    
       }       printf("\n");
   }
       /* for(int i=0;i<taille;i++){
	       for(int j=0;j<=(length+1);j++){
			   if(i<1 && (i+1)<2){
			   s+=(ta[i][j]*ta[(i+1)][(j+1)]);
		   }
	   }
   }
        for(int i=0;i<taille;i++){
	       for(int j=(length+1);j>=0;j--){
			    if(i<1 && (i+1)<2){
			   l+=(ta[i][j]*ta[(i+1)][(j-1)]);
		   }
	   }
   } 
       s-=l;*/
       for(int i=0;i<taille;i++){
	       for(int j=0;j<=(length+1);j++){
			   if(i<1 && (i+1)<taille){
			   s+=(ta[i][j]*ta[(i+1)][(j+1)]*ta[(i+2)][(j+2)]);
		   }
	   }
   }
        for(int i=0;i<taille;i++){
	       for(int j=(length+1);j>=0;j--){
			    if(i<1 && (i+1)<taille){
			   l+=(ta[i][j]*ta[(i+1)][(j-1)]*ta[(i+2)][(j-2)]);
		   }
	   }
   } 
       s-=l;
   return s;
}

