//Print 1 to 10 tables. 

#include <stdio.h>
#include <conio.h>

void main(){
    int i,j;

    for(i=1; i<=10; i++){
       printf("\n***** Table : %d *****");
       for(j=1; j<=10; j++){
          printf("\n%d * %d = %d", i, j, i*j);
       }
    }
}