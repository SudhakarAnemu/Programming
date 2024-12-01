//Read numbers and chars then display sum of numbers. 

#include <conio.h>
#include <stdio.h> 

void main(){

    int tnos, anos[100], k, l;
    char achar[100], ch;
    k=0;
    l=0;
    printf("\nHow many totoal chars, numbers you wanted to enter : ");
    scanf("%d", &tnos);

    for(int i=0; i<tnos; i++){
        printf("\nEnter %d number or char : ", (i+1));
        getchar(ch);
        if(isalpha(ch)>0){

        }
        else if(isdigit(ch)>0){

        }


    }//end for
    

}//end main