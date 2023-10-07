#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int i,j,n;
    printf("Enter no. of lines in pattern: ");
    scanf("%d",&n);
    //Row
    for(i=1;i<=n;i++){
        //Column
        //Space
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        //Stars
        for(j=1;j<=i;j++){
            printf("*");
        }
        

        printf("\n");
    }
}