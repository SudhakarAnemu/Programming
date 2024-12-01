
#include<stdio.h>
#include<conio.h>

//int x=888, y=999;

int readInts()
 {
    printf("\nI am at read function\nEnter values for x and y : ");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("\nI am at read function\nValues of x and y : %d and %d", x,y);
    return 0;
 }

 int displayInts()
 {
    printf("\nI am at the function displayInts\n");
    printf("\nValues of x and y : %d and %d", x,y);
    return 0;
 }

 int main()
 {
    int x,y;
    printf("\nI am at main function and calling read function\n");
    readInts();
    displayInts();
    return 0;
 }
