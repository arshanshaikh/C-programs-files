#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int GetNoOfLines(){
    int no;
    printf("Enter no. of lines in pattern: ");
    scanf("%d",&no);
    return no;
}
void PrintPatternWithStar(int n){

    int i,j;
    //Row
    for(i=1;i<=n;i++){
        //Column
        //Stars
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
void PrintPatternWithNum(int n){
    int i,j;
    //Row
    for(i=1;i<=n;i++){
        //Column
        //Stars
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
void PrintPatternWithChar(int n){
    int i,j;
    //Row
    for(i=1;i<=n;i++){
        //Column
        //Stars
        for(j=1;j<=i;j++){
            printf("%c",(char)j+64);
        }
        printf("\n");
    }
}
void main(){
    int n;
    n = GetNoOfLines();
    PrintPatternWithStar(n);
    PrintPatternWithNum(n);
    PrintPatternWithChar(n);
}