//Arrays

#include <conio.h>
#include <stdio.h>

void main(){

    int a[5] = {11,12,13,14,15};

    for(int i=0; i<=10; i++){
        printf("\nNumber of %d is %d & Size = %d Address : %d", i+1, a[i], sizeof(a[i]), &a[i]);
    }

}//end main



input : 6 numbers :::   1 2 3 4 5 6
1 + 1 = 2
3 + 1 = 4 
5 + 1 = 6
2 + 2 = 4
4 + 2 = 6
6 + 2 = 8

Total -- (2+4, + 6 + 4 + 6 + 8) -- Sum 

