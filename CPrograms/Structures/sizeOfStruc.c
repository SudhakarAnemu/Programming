// Playing with structures

#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct student
{
    char sname[100];
    int sno;
}st;

void main() {

/* Read data for one student : 
    st std1;

    printf("\nEnter name of a student : \n");
    scanf("%s", &std1.sname);

    printf("\nEnter number of a student : \n");
    scanf("%d", &std1.sno);

    //strcpy(std1.sname,"Sai Nandhan");
    //std1.sno=2233;

    printf("\nValues of student 1 :\n");
    printf("\nStudent name : %s\nStudent number : %d", std1.sname, std1.sno);

    printf("\nSize of the Stuct std1 : %d", sizeof(std1));

*/

    st std[2];
    printf("\nReading data for students : ");
    for(int i=0; i<2; i++){
        printf("\nEnter name for student %d : ", i+1);
        scanf("%s", &std[i].sname);
        printf("\nEnter number for student %d : ", i+1);
        scanf("%d", &std[i].sno);
    }

    printf("\nPrinting data for students : ");
    for(int i=0; i<2; i++){
        printf("\nName of the student : %s and Number of the Student : %d", std[i].sname, std[i].sno);
    }
    //printf("\nSting com %d", strcmp(std[0].sname, std[1].sname));
    if (strcmp(std[0].sname, std[1].sname)){
        printf("\nNames are not equal");
    }
    else{
        printf("\nNames are equal, lets compare numbers");
        if ((std[0].sno == std[1].sno))
            printf("\nNice even number are same.. ");
        else
            printf("\nNope ------- Names are same but not Numbers. ");    
    }


}//end main

