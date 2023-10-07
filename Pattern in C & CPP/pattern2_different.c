#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int i,j,n;
    // printf("Enter no. of lines in pattern: ");
    // scanf("%d",&n);
    //Row
    for(i=1;i<=5;i++){
        //Column
        //Space
        for(j=1;j<=5-i;j++)
        {
            printf(" ");
        }
        //Stars
        for(j=1;j<=i;j++){
            printf("* ");
        }
        // //Stars2
        // for(j=1;j<=i-1;j++){
        //     printf("*");
        // }

        printf("\n");
    }
}