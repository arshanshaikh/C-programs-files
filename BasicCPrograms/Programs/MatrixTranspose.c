#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int m1[10][10], m2[10][10];
    int i , j, row, column, sum=0; 
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

    //Printing original matrix
    printf("\n\nOriginal matrix : \n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%d\t",m1[i][j]);
        }
        printf("\n");
    }

    //Printing Diagoinal elements of original matrix
    printf("\nDiagonal elements of original matrix: \n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            if(i==j){
                printf("%d\t",m1[i][j]);
                sum += m1[i][j];
            }
        }
    }
    printf("\nSum of Diagonal elements of original matrix: %d", sum);

    //Getting transpose of matrix
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            m2[i][j] = m1[j][i];
        }
    }

    //Printing transpose of matrix
    printf("\n\nTranspose of matrix : \n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%d\t",m2[i][j]);
        }
        printf("\n");
    }  
}