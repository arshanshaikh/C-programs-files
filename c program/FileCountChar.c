#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    FILE *fp;
    int len=0;
    fp = fopen("Student.txt","r");
    while(!feof(fp)){
        getc(fp);
        len++;
    }
    len--;
    fclose(fp);
    printf("No. of characters in file is %d",len);
}