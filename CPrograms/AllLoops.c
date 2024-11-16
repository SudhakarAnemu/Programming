//Use all loops

#include <stdio.h>
#include <conio.h>

void main(){

    int i;

    printf("\nDisplay 10 numbers using for loop : ");
    for(i=1; i<=10; i++){
        printf("\t%d", i);
    }

    printf("\nDisplay 10 Numbers using while : ");
    i=1;
    while(i<=10){
        printf("\t%d", i++);
    }

    printf("\nDisplay 10 numbers using do-while ");
    i=1;
    do{
        printf("\t%d", i);
    }while(i++<10);

}//end main
