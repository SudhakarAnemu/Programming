//Arrays

#include <conio.h>
#include <stdio.h>

void main(){

    int a[6], sum=0; 
    printf("\nEnter 6 numbers : ");

    for(int i=0; i<6; i++){
        printf("\nNumber %d please : ", i+1);
        scanf("%d", &a[i]);
    }
    printf("\nGiven numbers : \n");
    for(int i=0; i<6; i++)
        printf("\t%d", a[i]);
    printf("\n");
    for(int i=0; i<6; i++){
        printf("\n\t%d\t+\t%d\t=\t%d", a[i], 1, a[i]+1);
        sum = sum+(a[i]+1);
        i++;
        
    }
    printf("\n");
    for(int i=1; i<6; i++){
        printf("\n\t%d\t+\t%d\t=\t%d", a[i], 2, a[i]+2);
        i++;
        sum = sum+(a[i]+1);
        //sum=sum+
    }
    printf("\nTotal -- %d", sum+1);
    
}//end main


/*
input : 6 numbers :::   1 2 3 4 5 6
1 + 1 = 2
3 + 1 = 4 
5 + 1 = 6
2 + 2 = 4
4 + 2 = 6
6 + 2 = 8

Total -- 30
*/
