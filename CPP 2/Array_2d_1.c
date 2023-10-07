// just printing 2 array element in matrix


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int m1[10][10], m2[10][10], m3[10][10], m4[10][10];
    int i , j, row, column; 
    printf("\nEnter no. of rows in matrix: ");
    scanf("%d",&row);
    printf("\nEnter no. of columns in matrix: ");
    scanf("%d",&column);
   
    //Getting input for first matrix
    printf("\nPlease input elements for first matrix.\n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("Enter a[%d][%d] value: ",i,j);
            scanf("%d",&m1[i][j]);
        }
    }

    //Printing output of matrix.
    printf("\n\n Matrices : \n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%d \t",m1[i][j]);
        }
        printf("\n");
    }

}




