#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    FILE *fp;
    char name[20],temp1[20];
    int rollno, temp3, choice;
    do{
        system("cls");
        printf("****Student Data****\n");
        printf("1. Add new student\n2. Display all students\n3. Exit\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1 : fp = fopen("Student.txt","a");
                    printf("\nEnter Student roll no. : ");
                    scanf("%d",&rollno);
                    printf("\nEnter Student name : ");
                    scanf("%s",&name);
                    fprintf(fp,"\n%d\t%s",rollno,name);
                    fclose(fp);
                    printf("\n\nStudent added!!\nPress any key to continue..");
                    getch();
                    break;
            case 2 : fp = fopen("Student.txt","r");
                    printf("\n\nRoll No.\tName\n");
                    printf("-----------------------------\n");
                    while(!feof(fp)){
                        fscanf(fp,"%d%s",&rollno,name);
                        printf("%d\t\t%s\n",rollno,name);
                    }
                    fclose(fp);
                    printf("\n\nPress any key to continue..");
                    getch(); 
                    break;
            case 3 : printf("\nExitting.."); 
                    break;
            default : printf("Wrong choice!!\nPress any key to continue..");
                    getch();
                    break; 
        }
    }while(choice != 3);    
}