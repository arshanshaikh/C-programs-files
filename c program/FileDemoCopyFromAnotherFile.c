#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    FILE *fp1,*fp2;
    char c = ' ';
    fp1 = fopen("Test.txt","r");
    fp2 = fopen("Test - Copy.txt","w");
    printf("Copying data from Test.txt to Test - Copy.txt ....\n");
    while(!feof(fp1)){
        fputc(getc(fp1),fp2);
    }
    fclose(fp1);
    fclose(fp2);
    fp2 = fopen("Test - Copy.txt","r");
    printf("\nFile content of Test - Copy.txt : \n");
    while(!feof(fp2)){
        printf("%c",getc(fp2));
    }
    fclose(fp2);
}