#include<stdio.h>
#include<conio.h>

struct date
{
     int day;
     int month;
     int year;
};

struct student
{
    char stdname[100];
    int stdno;
    struct date stddob;
};

void main()
{
    struct student std1;

    printf("\nEnter name of the student : ");
    scanf("%s", std1.stdname);

    printf("\nEnter student number : ");
    scanf("%d", &std1.stdno);

    printf("\nEnter student day, month and year : ");
    scanf("%d%d%d", &std1.stddob.day, &std1.stddob.month, &std1.stddob.year);

    printf("\n\n-------- Data of the Student ----------");
    printf("\n\n%s %d %d %d %d", std1.stdname, std1.stdno, std1.stddob.day, std1.stddob.month, std1.stddob.year);

}