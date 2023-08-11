#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char*unit(int isa){
	switch(isa){
		
		case 1: return "iray";
		case 2:return "roa";
		case 3:return "telo";
		case 4:return "efatra";
		case 5:return "dimy";
		case 6:return "enina";
		case 7:return "fito";
		case 8:return "valo";
		case 9: return "sivy";
		default : return " ";
	}
}
char*dizaine(int isa){
	switch(isa){
		case 1:return "folo";
		case 2:return "roapolo";
		case 3:return "telopolo";
		case 4:return "efapolo";
		case 5:return "dimampolo";
		case 6:return "enimpolo";
		case 7:return "fitopolo";
		case 8:return "valopolo";
		case 9: return "sivifolo";
		default : return " ";
	}
}
char*centaine(int isa){
	switch(isa){
		case 1:return "zato";
		case 2:return "roanjato";
		case 3:return "telonjato";
		case 4:return "efajato";
		case 5:return "dimanjato";
		case 6:return "eninjato";
		case 7:return "fitonjato";
		case 8:return "valonjato";
		case 9: return "sivanjato";
		default : return " ";
	}
}
 char*centaine1( long long n){
	 char* str;
	 str=malloc(100);
	 char*st;
	 st=malloc(1000);
	 sprintf(str,"%lld",n);
	//strcat(st,unit(n));
	//printf("%s",st);
	if( strlen(str)==1 ){
		 strcat(st,unit(n));
		// printf("%s",st);
	 }
	 if(strlen(str)==2){
		 if(n%10==0){
			 strcat(st,dizaine((n/10)));
			;
		 }
		 else{
			 if(n>=11 && n<20){
		 strcat(st,unit((n%10)));
		 strcat(st," ");
		 strcat(st,"ambin'ny");
		 strcat(st," ");
		 strcat(st,dizaine(n/10));
	     }
	     else{
		 strcat(st,unit((n%10)));
		 strcat(st," ");
		 strcat(st,"amby");
		 strcat(st," ");
		 strcat(st,dizaine(n/10));
	     } 
		//printf("%s  %s",st,ch); 
	}
	}
		 
	if(strlen(str)==3){
		 long int zato=n/100;
         
		   if(n>=100 && n<=199){

			if(n%10==0){
			   strcat(st,dizaine((n%100)/10));
			   strcat(st," ");
			   strcat(st,"amby ");
			   strcat(st,centaine(zato));
		    }
		    else{
			if(n%100==0){
				strcat(st,centaine(n/100));
				return st;
			}
			else if(n>=101 && n<109){
			       
				
				 strcat(st,unit((n%100)%10));
	             strcat(st," ");
                 strcat(st,"amby ");
	             //strcat(st," ");
	             // strcat(st," ");
	           
	                 strcat(st,centaine(n/100));
			    }
	        
			else{
				if(n>=111 && n<=119){
			   strcat(st,unit((n%100)%10));
			   strcat(st," ");
			   strcat(st,"ambin'ny  ");
			 
			   strcat(st,dizaine((n%100)/10));
			   strcat(st," ");
			   strcat(st,"amby ");

			   strcat(st,centaine(zato));
		       }
		       else{
				   strcat(st,unit((n%100)%10));
			       strcat(st," ");
			       strcat(st,"amby ");

			       strcat(st,dizaine((n%100)/10));
			       strcat(st," ");
			       strcat(st,"amby ");
			      
			       strcat(st,centaine(zato));
		       }  
		     }
			}
	       //printf("%s",st);
		   }
		if(n>=200&& n<=999){
			if(n%100==0){
			  strcat(st,centaine(zato));
			  return st;
			 }
			if(n%10==0){

	       strcat(st,dizaine((n%100)/10));
	       strcat(st," ");
	       strcat(st,"sy ");
	      
	       strcat(st,centaine(zato));
	      }
	      /*if(n%100==0){
			  strcat(st,centaine(zato));
			  return st;
			 }*/
	      else{
			  if((n%100)>=11 && (n%100)<20){
				 strcat(st,unit((n%100)%10));
	       strcat(st," ");
	       strcat(st,"ambin'ny ");

	       strcat(st,dizaine((n%100)/10));
	       strcat(st," ");
	       strcat(st,"sy ");
	      
	       strcat(st,centaine(zato));
	       }
			 else{
				  if((n%100)>=1 && (n%100)<9){
				  strcat(st,unit(n%100)); 
				  strcat(st," ");
	              strcat(st,"sy ");
	              strcat(st,centaine(zato));
			     }
			     else{	  
	             strcat(st,unit((n%100)%10));
	             strcat(st," ");
	             strcat(st,"amby ");

	             strcat(st,dizaine((n%100)/10));
	             strcat(st," ");
	             strcat(st,"sy ");
	      
	             strcat(st,centaine(zato));
	             }
	        
	             
	         }
		}
	 }
	  
  }
   
	return st;
 }
char*arivo1( long long l){
	char*t;
	t=malloc(10);
	
	char*ca;
	ca=malloc(500);
	sprintf(t,"%lld",l);
	  //printf("%ld",l);
	if(strlen(t)==4){
		if(l%1000==0){
			if((l/1000)==1){
				strcat(ca,"arivo");
			}
			else{
			strcat(ca,unit(l/1000));
			strcat(ca," arivo");
			//printf("%s",ca);
		    }
		    
		}
		else{
			strcat(ca,centaine1(l%1000));
			strcat(ca," sy ");
			strcat(ca,unit(l/1000));
			strcat(ca," arivo");
			//printf("%s",ca);
		}
  }
    
    return ca;
 }
 char*alina1(long long ent){
	 char*tr;
	tr=malloc(100);
	
	char*car;
	car=malloc(500);
	sprintf(tr,"%lld",ent);
	// printf("%s",tr); 
	if(strlen(tr)==5){
		  if((ent%10000)==0){
			  strcat(car,unit(ent/10000));
			  strcat(car," alina ");
			 
		  }
		  if(ent%10000>=1 && ent%10000<=999){
		  else{
			  strcat(car,arivo1(ent%10000));
			  strcat(car," sy ");
			  strcat(car,unit(ent/10000));
			  strcat(car," alina ");
		   
	  }
	}
	return car;
} 
char*hetsy(long long enti){
	 char*trc;
	trc=malloc(100);
	
	char*cr;
	cr=malloc(500);
	sprintf(trc,"%lld",enti);
	// printf("%s",tr); 
	if(strlen(trc)==6){
		  if((enti%100000)==0){
			  strcat(cr,unit(enti/100000));
			  strcat(cr," hetsy ");
			 
		  }
		  else{
			  strcat(cr,alina1(enti%100000));
			  strcat(cr," sy ");
			  strcat(cr,unit(enti/100000));
			  strcat(cr," hetsy ");
	      }//printf("%s",cr);
	}
	return cr;
}
char*tapitrisa(long long entie){
	char*tc;
	tc=malloc(100);
	
	char*c;
	c=malloc(500);
	sprintf(tc,"%lld",entie);
	// printf("%s",tr);
	
		 
	if(strlen(tc)==7){
		  if((entie%1000000)==0){
			  strcat(c,unit(entie/1000000));
			  strcat(c," tapitrisa ");
			 
		  }
		else if(entie%1000000>=1 && entie%1000000<=999){
			    strcat(c,centaine1(entie%1000000));
			     strcat(c," sy ");
			    strcat(c,unit(entie/1000000));
			     strcat(c," tapitrisa ");
		}
		  else{
			  strcat(c,hetsy(entie%1000000));
			  strcat(c," sy ");
			  strcat(c,unit(entie/1000000));
			  strcat(c," tapitrisa ");
	      }//printf("%s",c);
	}
	if(strlen(tc)==8){
		if((entie%1000000)==0){
			  strcat(c,centaine1(entie/1000000));
			  strcat(c," tapitrisa ");
			 
		  }
		  else if(entie%1000000>=1 && entie%1000000<=999){
			    strcat(c,centaine1(entie%1000000));
			     strcat(c," sy ");
			    strcat(c,centaine1(entie/1000000));
			     strcat(c," tapitrisa ");
		}
		  else{
			  strcat(c,hetsy(entie%1000000));
			  strcat(c," sy ");
			  strcat(c,unit(entie/1000000));
			  strcat(c," tapitrisa ");
	      }
	    //  printf("%s",c);
	   }  
	   if(strlen(tc)==9){
		   if((entie%1000000)==0){
			  strcat(c,centaine1(entie/1000000));
			  strcat(c," tapitrisa ");
			 
		  }
		  else if(entie%1000000>=1 && entie%1000000<=999){
			    strcat(c,centaine1(entie%1000000));
			     strcat(c," sy ");
			    strcat(c,centaine1(entie/1000000));
			     strcat(c," tapitrisa ");
		}
		  else{
			  strcat(c,hetsy(entie%10000000));
			  strcat(c," sy ");
			  strcat(c,unit(entie/1000000));
			  strcat(c," tapitrisa ");
	      }//printf("%s",c);
	    } 
	  
		   
	return c;
}
char*lavitrisa(long long ti){
	char*car;
	car=malloc(100);
	
	char*ch;
	ch=malloc(600);
	sprintf(car,"%lld",ti);
	if(strlen(car)==10){
		
		  if((ti%1000000000)==0){
			  strcat(ch,unit(ti/1000000000));
			  strcat(ch," lavitrisa");
			 
		  }
		else if(ti%1000000000>=1 && ti%1000000000<=999){
			    strcat(ch,centaine1(ti%1000000000));
			     strcat(ch," sy ");
			    strcat(ch,unit(ti/1000000000));
			     strcat(ch," lavitrisa");
		}
		  else{
			  strcat(ch,hetsy(ti%1000000000));
			  strcat(ch," sy ");
			  strcat(ch,unit(ti/1000000000));
			  strcat(ch," lavitrisa ");
	      }//printf("%s",c);
	}
		if(strlen(car)==11){
		if((ti%1000000000)==0){
			  strcat(ch,centaine1(ti/1000000000));
			  strcat(ch," lavitrisa ");
			 
		  }
		  else if(ti%1000000000>=1 && ti%1000000000<=999){
			    strcat(ch,centaine1(ti%1000000000));
			     strcat(ch," sy ");
			    strcat(ch,centaine1(ti/1000000000));
			     strcat(ch," lavitrisa ");
		}
		  else{
			  strcat(ch,hetsy(ti%1000000000));
			  strcat(ch," sy ");
			  strcat(ch,unit(ti/1000000000));
			  strcat(ch," lavitsisa ");
	      }
	    //  printf("%s",c);
	   } 
	    if(strlen(car)==12){
		   if((ti%1000000000)==0){
			  strcat(ch,centaine1(ti/1000000000));
			  strcat(ch," lavitrisa ");
			 
		  }
		  else if(ti%1000000000>=1 && ti%1000000000<=999){
			    strcat(ch,centaine1(ti%1000000000));
			     strcat(ch," sy ");
			    strcat(ch,centaine1(ti/1000000000));
			     strcat(ch," lavitrisa ");
		}
		  else{
			  strcat(ch,hetsy(ti%1000000000));
			  strcat(ch," sy ");
			  strcat(ch,unit(ti/1000000000));
			  strcat(ch," lavitrisa ");
	      }//printf("%s",c);
	    } 
	    if(strlen(car)== 13){
			
			if((ti%1000000000)==0){
			  strcat(ch,arivo1(ti/1000000000));
			  strcat(ch," lavitrisa ");
			 
		  }
		  else if(ti%1000000000>=1 && ti%1000000000<=999){
			    strcat(ch,centaine1(ti%1000000000));
			     strcat(ch," sy ");
			    strcat(ch,arivo1(ti/1000000000));
			     strcat(ch," lavitrisa ");
		}
		  else{
			  strcat(ch,hetsy(ti%1000000000));
			  strcat(ch," sy ");
			  strcat(ch,unit(ti/1000000000));
			  strcat(ch," lavitrisa ");
	      }//printf("%s",c);
			
			
	    }
		
	return ch;
}
			 
int main (){
	 long long n;
	n=60001;
	
	char*stt;
	stt=malloc(800);
	/*char*st;
	st=malloc(500);*/
	
	if(n<1){
		printf("aotra");
	}
	if(n>=1 && n<=999){
		strcpy(stt,centaine1(n));
	}
	
	if(n>=1000 && n<=9999){
	strcpy(stt,arivo1(n));
	printf("%s\n",stt);
    }
    if(n>=10000 && n<=99999){
		strcpy(stt,alina1(n));
		printf("%s\n",stt);
	}
	if(n>=100000 && n<=999999){
		strcpy(stt,hetsy(n));
		printf("%s\n",stt);
	}
	if(n>=1000000 && n<=999999999){
    strcpy(stt,tapitrisa(n));
    printf("%s\n",stt);
    }
    if(n<1000000000 && n<=1000000000000){
		
	strcpy(stt,lavitrisa(n));
	printf("%s\n",stt);
    }
	


	return 0;
}

