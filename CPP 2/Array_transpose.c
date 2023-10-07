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

    //Getting input for second matrix
    printf("\nPlease input elements for second matrix.\n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("Enter a[%d][%d] value: ",i,j);
            scanf("%d",&m2[i][j]);
        }
    }

    //Addition of two matrices 
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }

    //Printing output of addition of first and second matrices
    printf("\n\n Addition of two matrices : \n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%d \t",m3[i][j]);
        }
        printf("\n");
    }

    //Getting transpose of third matrix
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            m4[i][j] = m3[j][i];
        }
    }

    //Printing transpose of third matrix
    printf("\n\nTranspose of matrix : \n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%d\t",m4[i][j]);
        }
        printf("\n");
    }

       
}