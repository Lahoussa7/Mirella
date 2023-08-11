#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void PositionSlash(char*car,int*slash);
void separDeuxpoint(char**car,char**cara,int*twopoint);
void separslash(char* car,char**cr,int* slash);
char**separEspace(char* mot,int espace);
int positionEspace(char*mot);
void positionPoint(char**car,int*twopoint);
 int main(){
	char*mot="23.7/05/2023 16:47:00";
	
	
	int espace;
	espace=positionEspace(mot);
	char**car;
	car=malloc(3);
       for(int j=0;j<3;j++){
		   *(car+j)=malloc(40);
		}
		
	car=separEspace(mot,espace);
	printf("%s\n",*car);	printf("%s",*(car+1));
	int slash[2];
	PositionSlash(*car,slash);
	char**cr;
	cr=malloc(3);
       for(int j=0;j<3;j++){
		   *(cr+j)=malloc(40);
		}
		int*twopoint[2];
	separslash(*car,cr,slash);
	
	printf("%s\n",cr[0]);
		printf("%s\n",cr[1]);
		printf("%s\n",cr[2]);
		
		positionPoint(car,twopoint);
		char**cara;
	cara=malloc(3);
       for(int j=0;j<3;j++){
		   *(cara+j)=malloc(40);
		}
		
		separDeuxpoint(car,cara,twopoint);
	return 0;
	
 }
int positionEspace(char*mot){
    	int val=0;
	   for(int i=0;i<strlen(mot);i++){
 		  if(mot[i]==' ')
 			 return i;
	   }
    	return val;
}
char**separEspace(char* mot,int espace){
	 
       char**chara;
       chara=malloc(3);
       for(int j=0;j<3;j++){
		   *(chara+j)=malloc(20);
		}
       
	for(int i=0;i<espace;i++)
		chara[0][i]=mot[i];
	
	for(int j=espace+1,i=0;j<strlen(mot);i++,j++)
		chara[1][i]=mot[j];
	
 return chara;
}
void PositionSlash(char*car,int*slash){
    for(int i=0;i<strlen(car);i++)
        if(car[i]=='/'){
			slash[0]=i;
			break;
        }
     
    for(int j=(*slash+1);j<strlen(car);j++)
       if(car[j]=='/'){
		   slash[1]=j;
		   break;
	   }
    
    return ;
 }

void separslash(char* car,char**cr,int* slash){
	int x=0,y=0;
    for(int i=0;i<strlen(car);i++){
		if(car[i]=='/'){
			x++,y=0,i++;
		}
		cr[x][y]=car[i];
		y++;
	}
} 
 
void positionPoint(char**car,int*twopoint){
    for(int i=0;i<strlen(*(car+1));i++)
        if(*(*(car+1)+i)==':'){
			twopoint[0]=i;
			break;
        }
     
    for(int j=*(twopoint+1);j<strlen(*(car+1));j++)
       if(*(*(car+1)+j)==':'){
		   twopoint[1]=j;
		   break;
	   }
    
    return ;
}
 void separDeuxpoint(char**car,char**cara,int*twopoint){

	    
	 	int manisatwopoint=0,manisacara=0;
    for(int i=0;i<strlen(*(car+1));i++){
		if(*(*(car+1)+i)==':'){
			manisatwopoint++,manisacara=0,i++;
		}
		cara[manisatwopoint][manisacara]=*(*(car+1)+i);
		manisacara++;
	}
}	 
