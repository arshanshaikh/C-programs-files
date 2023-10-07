#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int i,j,n;
    printf("Enter no. of lines in pattern: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        //even
        if(i%2==0)
        {
            for(j=i;j>=1;j--)
            {
                printf("%d ",j);
            }
        }
        else 
        {   //odd
            for(j=1;j<=i;j++)
            {
                printf("%d ",j);
            }
        }
        printf("\n");
    }
}
