#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int estVirgul(char*mot);
void separVirgul(char* mot,char**vari,int virg);
int puiss(int e,int a);
double charTodouble(char*chaine);
void separslash(char*mot,char**car,int* slash );
int charToint(char*mot);
void PositionSlash(char*mot,int*slash);
char** convertToDate(double nbr);
int main(){
	char*mot="13.12/05/2023";
 	
	//printf("strlen mot = %ld\n",strlen(mot));
    int slash[2];
    PositionSlash(mot,slash);
    printf("slash[0] = %d\n",slash[0]);
    printf("slash[1] = %d\n",slash[1]);
    
	
	char**car;
	car=malloc(3);
	for(int i=0;i<3;i++){
		car[i]=malloc(4);
	}
	separslash(mot,car,slash);
	printf("car[0] = %s\n",car[0]);
    printf("car[1] = %s\n",car[1]);
    printf("car[2] = %s\n",car[2]);
    
    char**fas;
	fas=malloc(3);
	for(int i=0;i<3;i++){
		fas[i]=malloc(4);
	}
    
    int virg=estVirgul(car[0]);
	separVirgul(car[0],fas,virg);
    printf("fas[0] = %s\n",fas[0]);
    printf("fas[1] = %s\n",fas[1]);
    double nbr=charTodouble(*car);;
    printf("La chaine est convertie en nombre = %g\n",nbr);
    convertToDate(nbr);
    // printf("%f\n",day);
    return 0;
}

int estVirgul(char*mot){
    	int val=0;
	   for(int i=0;i<strlen(mot);i++){
 		  if(mot[i]=='.')
 			 return i;
	}
    	return val;
}
void separVirgul(char* mot,char**vari,int virg){
	 
       
	for(int i=0;i<virg;i++)
		vari[0][i]=mot[i];
	
	for(int j=virg+1,i=0;j<strlen(mot);i++,j++)
		vari[1][i]=mot[j];
	
 return ;
}
int charToint(char*mot){
    int sum;
    sum=0;
    for(int j=0;j<strlen(mot);j++)				/// 12.03/05/2023
	      	sum+=((mot[j]-'0')*(puiss(10,(strlen(mot)-j-1))));
 return sum;
}
int puiss(int bas,int a){
	int r;
	r=1;
	for(int i=1;i<=a;i++)
		r=r*bas;
	
	return r;
}	
double charTodouble(char*chaine){
	double nbr;
	nbr=atof(chaine);
	return nbr; 
}
void PositionSlash(char*mot,int*slash){
    for(int i=0;i<strlen(mot);i++)
        if(mot[i]=='/'){
			slash[0]=i;
			break;
        }
     
    for(int j=(*slash+1);j<strlen(mot);j++)
       if(mot[j]=='/'){
		   slash[1]=j;
		   break;
	   }
    
    return ;
 }
void separslash(char* mot,char**car,int* slash){
	int x=0,y=0;
    for(int i=0;i<strlen(mot);i++){
		if(mot[i]=='/'){
			x++,y=0,i++;
		}
		car[x][y]=mot[i];
		y++;
	}
} 
char** convertToDate(double nbr){
	char**date=malloc(2);
	for(int i=0;i<2;i++){
	*(date+i)=malloc(12);
    }
	float day, heure,minute,seconde;
	
	heure=0;
	minute=0;
	seconde=0;
	day=nbr-(int)nbr;
    seconde=day*24*60*60;
	while(seconde>=60){
		minute++;
		seconde-=60;
	 while(minute>=60){
		 heure++;
		 minute-=60;
	}
}
 
   
    
	sprintf(hour," %02g :%02g :%02d\n",heure,minute,(int)seconde);
	
	return date;
  }
