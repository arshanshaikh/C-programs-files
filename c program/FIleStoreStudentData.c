#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    FILE *fp;
    char name[20],temp1[20];
    int rollno, temp3;
    //Writing in file
    fp = fopen("Student.txt","w+");
    printf("Enter Student name and roll no. : \n");
    scanf("%s %d", &name, &rollno);
    fprintf(fp,"%s\t%d\n",name,rollno);
    fprintf(fp,"Jason\t13");
    //Reading from file
    rewind(fp);
    printf("Name\tRoll No.\n");
    fscanf(fp,"%s%d",temp1,&temp3);
    printf("%s\t%d",temp1,temp3);
    fscanf(fp,"%s%d",temp1,&temp3);
    printf("\n%s\t%d",temp1,temp3);
    fclose(fp);
}