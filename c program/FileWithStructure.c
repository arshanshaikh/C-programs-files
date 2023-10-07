#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct Student {
    int rollno;
    char name[20];
    float perc;
}Student;
void main(){
    FILE *fp;
    Student s1[3];
    char name[20];
    int rollno;
    float perc;
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
    //Writing student data to file from structure array
    printf("\nStoring Student Info In File...\n");
    fp = fopen("StudentsData.txt","w+");
    for(i=0;i<3;i++){
        if(i!=2)
            fprintf(fp,"%d\t%s\t%f\n",s1[i].rollno,s1[i].name,s1[i].perc);
        else
            fprintf(fp,"%d\t%s\t%f",s1[i].rollno,s1[i].name,s1[i].perc);
    }
    //Reading data from file
    rewind(fp);
    printf("Roll No.\tName\tPercentage\n");
    while(!feof(fp)){
        fscanf(fp,"%d%s%f",&rollno,name,&perc);
        printf("%d\t%s\t%f\n",rollno,name,perc);
    }
    fclose(fp);
}