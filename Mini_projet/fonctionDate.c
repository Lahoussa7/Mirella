#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double ConvertToHeureDate(double jour);
int main(){
	double jour ;
	jour=45.67;
	/*int month;
	month=05;
	int annee
	annee=2023;*/
	ConvertToHeureDate(jour);
	
	
	
	return 0;
}
double ConvertToHeureDate(double jour){
	float day;
	day=(jour-(int)(jour));
	printf("%g\n",day);
	return day;
}
	
