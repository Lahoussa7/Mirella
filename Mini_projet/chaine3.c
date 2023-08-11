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
char* convertToDate(double nbr,double month,double ans);
int main(){
	  char*mot="23.12/12.55/2023.56";
 	
    int slash[2];
    PositionSlash(mot,slash);
    	//printf("%d",slash[0]);
	   char**car;
	   car=malloc(3);
    	for(int i=0;i<3;i++){
	      	car[i]=malloc(4);
	   }
	   separslash(mot,car,slash);
	
    char**fas;
	   fas=malloc(3);
    	for(int i=0;i<3;i++){
		  fas[i]=malloc(4);
	   }
    
    int virg=estVirgul(car[0]);
	   separVirgul(car[0],fas,virg);
    
    double jour=charTodouble(*car);;
    double month=charTodouble(*(car+1));
    double ans=charTodouble (*(car+2));
    char*date;
    date=malloc(35);
    
   strcpy(date,convertToDate(jour,month,ans));
    printf("%s",date);
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
char* convertToDate(double jour,double month, double ans){
	char*hour=malloc(20);
	
	float day, heure,minute,seconde;
	heure=0;
	minute=0;
	seconde=0;
 month=month+(ans-(int)ans);
 while(month>=12){
 ans++;
 month-=12;
}
 day=jour+(month-(int)month);
 if(((int)month<=7 && (int)month%2==1) ||((int)month>7 && (int)month%2==0)){
 while (day>=31){
 month++;
 day-=31;
}
}
 else{
  if(month==2){
  while(month>=28){
    month++;
    day-=28;
  }
  }
  else{
  while(day>=30){
    month++;
    day-=30;
}
}
}
     day=day-(int)day;
     seconde=day*24*60*60;
	 while(seconde>=60){
		minute++;
		seconde-=60;
	}
	 while(minute>=60){
		 heure++;
		 minute-=60;
	}
    sprintf(hour," %02d :%02d :%02d  %d/ %d/ %d ",(int)heure,(int)minute,(int)seconde,(int)day,(int)month,(int)ans);
	
	return hour;
  }
