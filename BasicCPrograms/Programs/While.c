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
        for(j=1;j<=i;j++){
             //printf("*");
          //  printf("%d",i);
            // printf("%d",j);
            printf("%c",(char)j+64);
        }
        printf("\n");
    }
    
    // int i, n, sum=0;
    // float avg;
    // i=0;
    // while(i<10){
    //     printf("Enter number: ");
    //     scanf("%d",&n);
    //     sum += n;
    //     i++;
    // }

    // avg = sum/10;
    // printf("Average of 10 numbers = %f",avg);


}
