// for square & non-square matrix multiplication.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int m1[10][10], m2[10][10], m3[10][10];
    int i , j, k , row1, row2, column1, column2; 
    printf("\nEnter no. of rows in matrix 1: ");
    scanf("%d",&row1);
    printf("\nEnter no. of columns in matrix 1: ");
    scanf("%d",&column1);
   
    //Getting input for first matrix
    printf("\nPlease input elements for first matrix.\n");
    for(i=0;i<row1;i++){
        for(j=0;j<column1;j++){
            printf("Enter a[%d][%d] value: ",i,j);
            scanf("%d",&m1[i][j]);
        }
    }

    printf("\nEnter no. of rows in matrix 2: ");
    scanf("%d",&row2);
    printf("\nEnter no. of columns in matrix 2: ");
    scanf("%d",&column2);

    //Getting input for second matrix
    printf("\nPlease input elements for second matrix.\n");
    for(i=0;i<row2;i++){
        for(j=0;j<column2;j++){
            printf("Enter a[%d][%d] value: ",i,j);
            scanf("%d",&m2[i][j]);
        }
    }

    if(column1 == row2) {
        //Multiplication of two matrices 
        for(i=0;i<row1;i++){
            for(j=0;j<column2;j++){
                m3[i][j] = 0;
                for(k=0;k<row2;k++){
                    m3[i][j] += ( m1[i][k] * m2[k][j] );
                }
            }
        }

        //Printing output of multiplication of first and second matrices
        printf("\n\nMultiplication of two  matrices : \n");
        for(i=0;i<row1;i++){
            for(j=0;j<column2;j++){
                printf("%d \t",m3[i][j]);
            }
            printf("\n");
        }
    }       
    else{
        printf("Invalid operation. No. of collumns for 1st matrix and no. of rows for 2nd matrix do not match!!");
    }
}