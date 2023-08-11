#include <stdio.h>
#include <math.h>
int main(){
int s=0;
int l=0;
int d=0;
int h,n;
n=36000;
while(h>24){
h=n/60;
 l=(n%60);
 if(n>=60){
if((h%10)==0){
s=((h/10)+(h%10));
}
else{
    if(l>10)
    s=(((h/10)+(h%10))+((l/10)+(l%10)));
}
 }
 else{
     s=((n/10)+(n%10));
 }


printf("%d",s);


return 0;
}
