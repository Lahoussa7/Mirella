#include <stdio.h>
int main(){
	printf("quel l'heur il est\n");
	
	int s;
	int h,m,r,seconds;
	printf("entrez un nombre en seconde que vous voulez:\n");
	scanf("%d",&s);
	r= s%3600;
	h=(s-r)/3600;
	//printf("il est r= %d \n",r);
	seconds=r%60;
	m=(r-seconds)/60;
	
	printf("il est %d heur %d minute %d second\n",h,m,seconds);
	
	
	
	
	return 0;
}
