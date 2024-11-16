// Continue 

#include <conio.h>
#include <stdio.h>

void main(){

    for(int i=1; i<=10; i++)
    {
        printf("\nLoop - %d", i);
        printf("\ni = %d", i+1);
        if(i==3)
           continue;
        if(i==6)
           break;
        printf("\ni = %d", i+2);
    }
    printf("\nHellloooooooooooooo I am end of the program");

}


