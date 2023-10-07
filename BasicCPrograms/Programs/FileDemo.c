#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    FILE *fp;
    char c = ' ';
    fp = fopen("Test.txt","w");
    printf("Enetr data for storing in file and press '.' when done : \n");
    while(c!='.'){
        scanf("%c",&c);
        fputc(c,fp);
    }
    fclose(fp);
    fp = fopen("Test.txt","r");
    printf("\nFile content : \n");
    while(!feof(fp)){
        printf("%c",getc(fp));
    }
    fclose(fp);
}