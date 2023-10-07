#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Student {
    int rollno;
    char name[20];
    float perc;
}Student;
void main(){
    Student s1[3];
    int i;
    char c;
    for(i=0;i<3;i++){
        printf("***Enter Student %d Details***",i+1);
        printf("\nEnter Student Roll No. :");
        scanf("%d",&s1[i].rollno);
        system("cls");
        fflush(stdin);
        printf("***Enter Student %d Details***",i+1);
        printf("\nEnter Student Name :");
        scanf("%s",s1[i].name);
        fflush(stdin);
        system("cls");
        printf("***Enter Student %d Details***",i+1);
        printf("\nEnter Student Percentage :");
        scanf("%f",&s1[i].perc);
        system("cls");
        fflush(stdin);
    }
    printf("\n****Student Details****");
    for(i=0;i<3;i++){
        printf("\nStudent Roll No. : %d",s1[i].rollno);
        printf("\nStudent Name : %s",s1[i].name);
        printf("\nStudent Percentage : %f",s1[i].perc);
        printf("\n------------------------------------");
    }
}