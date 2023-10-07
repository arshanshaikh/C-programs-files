#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    FILE *fp1,*fp2;
    int len=0;
    char ch;
    fp1 = fopen("Sample.txt","r");
    fp2 = fopen("CaseConvertOutput.txt","w");
    while(!feof(fp1)){
        ch = fgetc(fp1);
        //For upper to lower case
        if(ch>=65 && ch <=90){
            ch = ch+32;
        }
        //For lower to upper case
        else if(ch>=97 && ch <=122){
            ch = ch-32;
        }
        fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    printf("Case conversion succcessful!!");
    printf("\nContent of output file CaseConvertOutput.txt : \n");
    fp2 = fopen("CaseConvertOutput.txt","r");   
    while(!feof(fp2)){
        printf("%c",getc(fp2));
    }
    fclose(fp2);
}