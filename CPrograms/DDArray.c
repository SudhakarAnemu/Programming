//Double dimensions : 

#include <stdio.h>
#include <conio.h>

void main()
{

    int a[2][2], b[2][2], sum[2][2], i, j;

    printf("\nEnter 1st Matrix : (2/2) : ");
    for(i=0; i<2; i++)
       for(j=0; j<2; j++){
          printf("\nEnter a number for the position a[%d,%d] : ", i, j);
          scanf("%d", &a[i][j]);
       }

    printf("\nEnter 2nd Matrix : (2/2) : ");
    for(i=0; i<2; i++)
       for(j=0; j<2; j++){
          printf("\nEnter a number for the position b[%d,%d] : ", i, j);
          scanf("%d", &b[i][j]);
          sum[i][j] = a[i][j] + b[i][j];
       }

       

    printf("\n Sum : \n"); 
    for(i=0; i<2; i++)
    {
       printf("\n");
       for(j=0; j<2; j++){
          printf("\t%d", sum[i][j]);
       }
    }


}//end main