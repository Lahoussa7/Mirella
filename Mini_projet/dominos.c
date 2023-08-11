#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
void dominos(int n);
int main()
{
    int t;
    int b;
    scanf("%d %d", &t, &b);
    printf("+---+\n");
 dominos(t);
 printf("+---+\n");
 dominos(b);
 printf("+---+\n");
    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
 
   
    return 0;
}  
void dominos(int n){
 if(n==0){

        printf("|   |\n");
        printf("|   |\n");
        printf("|   |\n");
    }
     if(n==1){

        printf("|   |\n");
        printf("| * |\n");
        printf("|   |\n");
    }
     if(n==2){

        printf("|*  |\n");
        printf("|   |\n");
        printf("|  *|\n");
    }
     if(n==3){

        printf("|*  |\n");
        printf("| * |\n");
        printf("|  *|\n");
    }
     if(n==4){

        printf("|* *|\n");
        printf("|   |\n");
        printf("|* *|\n");
    }
    if(n==5){

        printf("|* *|\n");
        printf("| * |\n");
        printf("|* *|\n");
    }
     if(n==6){

        printf("|* *|\n");
        printf("|* *|\n");
        printf("|* *|\n");
    }

   }
