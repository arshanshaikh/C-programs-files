#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int i,j,n;
    printf("Enter no. of lines in pattern: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=i;j<i+n;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}