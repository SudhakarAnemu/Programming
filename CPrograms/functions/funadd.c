//Functions to add 2 numbers.

#include <stdio.h>
#include <conio.h>

int a, b;

void printNumbers()
{
    printf("\nI am at the function - printNumbers");
    printf("\nValues of given numbers : %d and %d", a,b);
}

void readNumbers(int x, int j)
{
    printf("\nI am at the function - readNumbers");
    printf("\nEnter two numbers for variables a, b : ");
    scanf("%d", &a);
    scanf("%d", &b);
}


void main()
{
    int a, b;

    printNumbers(a,b);
    //readNumbers(a,b);
    //printNumbers(a,b);
    //sumNumbers(a,b);

}//end main