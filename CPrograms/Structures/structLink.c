// struct link 

#include <stdio.h>
#include <conio.h>

typedef struct list {
    int data;
    struct student *link ;
}student;

void main()
{
    student std1, std2; 

    std1.data = 1000;
    std2.data = 2000; 

    std1.link = NULL;
    std2.link = NULL;

    printf("\nstd*.data :  %d %d", std1.data, std2.data);

    printf("\nAddress of std* : %ld %ld", &std1, &std2);

    student *std3 = &std2;

    printf("\nAddress of std* : %ld %ld %ld", &std1, &std2, &std3);

    printf("\nValue of std* : %ld %ld %ld", std1.data, std2.data, std3->data);

    std3 = &std1;

    printf("\nAddress of std* : %ld %ld %ld", &std1, &std2, &std3);

    printf("\nValue of std* : %ld %ld %ld", std1.data, std2.data, std3->data);

    //printf("%d", std1.link.data);

}