#include<stdio.h>
#include<conio.h>

void main()
{
    int num;

    printf("Enter a number to check if it is  1,,2,3  : ");
    scanf("%d",&num);

    switch (num)
    {
        case 1:
            printf("The given number is 1");
        //break;

        case 2:
            printf("The given number is 2");
        //break;

        case 3:
            printf("The given number is 3");
        break;

        default:
            printf("Number is not between 0 to 4");
        break;
    }
}