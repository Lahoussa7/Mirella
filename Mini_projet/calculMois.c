#include <stdio.h>
#include <math.h>
#include <stdlib.h>
char* moisdelAnnee(float mois,float annee,float jour);
int main(){
	float mois,jour,annee;
	/*heure=0;
	minute=0;
	seconde=0;*/
	char*dat;
	dat=malloc(40);
	mois=12.55;
	annee=2023.23;
	jour=23.7;
	dat=moisdelAnnee(mois,annee,jour);
	//printf("%s\n",dat);

		
  return 0;
}	
	
char*moisdelAnnee(float mois,float annee,float jour){	
	char*date;
	date=malloc(40);
	float heure,seconde,minute,mois_cast,m;
	heure=0;
	seconde=0;
	minute=0;
	m=((annee-(int)annee)*12);
	mois+=m;
	while(mois>=12){
		annee+=1;
		mois-=12;
		
	}
	mois_cast=((mois-(int)mois)*30);
	jour=jour+mois_cast;
	if((mois<=7 && (int)mois%2==1)  || (mois>7 && (int)mois%2==0)){
	while(jour>=31){
		mois+=1;
		jour-=31;
	}
	
   }
   else{
   if(mois==2){
	   while(jour>=28){
		mois+=1;
		jour-=28;
	}
	
   }
    else{
		 while(jour>=30){
		mois+=1;
		jour-=30;
	}
   }
  }
	seconde=(jour-(int)jour)*24*60*60;
	while(seconde>=60){
		minute++;
		seconde-=60;
		while(minute>=60){
			heure ++;
			minute-=60;	
	}  
			
	}
	while(heure>=24){
		jour++;
		heure-=24;
	} 
	printf("%f",mois_cast);
	sprintf(date,"%02d/%02d/%02d  %02d:%02d:%02d",(int)jour,(int)mois,(int)annee,(int)heure,(int)minute,(int)seconde);
		return date;
	}	
