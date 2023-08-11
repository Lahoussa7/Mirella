#include<stdio.h>
#include<math.h>
#define Pi 3.14;
void circonferance1(float* rayon,float *circonferance,float *aire);
void airDeDisque(float *rayon,float* circonferance ,float *aire);


int main(){
	printf("calcule de l'air et de la circonferance\n");
	float rayon;
	float circonferance=0;
    float aire;
    while(rayon!=0){
	printf("entrer la valeur de rayon\n");
	scanf("%f",&rayon);
	
	/*circonferance=2*
    	*Pi;
	printf("la circonferance:%f=2*%f*Pi\n",circonferance,rayon);*/
	/*aire=rayon*rayon*Pi;
	printf("\nl'aire est:%f\n",aire);
    }*/	circonferance1(&rayon,&circonferance,&aire);
    airDeDisque(&rayon,&circonferance,&aire);
    }
	return 0;
}
void circonferance1(float *rayon,float* circonferance,float* aire){

	*circonferance=2**rayon*Pi;
		*aire=*rayon**rayon*Pi;
	//printf("la circonferance:%f=2*%f*Pi\n",*circonferance,rayon);
	}

void airDeDisque(float *rayon, float* circonferance,float *aire){
	//*aire=rayon*rayon*Pi;
	printf("la circonferance:%f=2*%f*Pi\n",*circonferance,*rayon);
	printf("\nl'aire est:%f\n",*aire);
	//return *aire;
}
