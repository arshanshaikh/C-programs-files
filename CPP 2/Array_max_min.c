#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    int m1[10][10], max, min;
    int i, j, row, column;
    printf("\nEnter no. of rows in matrix: ");
    scanf("%d", &row);
    printf("\nEnter no. of columns in matrix: ");
    scanf("%d", &column);

    //Getting input for first matrix
    printf("\nPlease input elements for matrix.\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("Enter a[%d][%d] value: ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }
    max = m1[0][0];
    min = m1[0][0];
    //max
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (m1[i][j] > max)

                max = m1[i][j];
        }

    }
        //min
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < column; j++)
            {
                if (m1[i][j] < min)

                    min = m1[i][j];
            }

        
        }
        printf("largest element in matrix:%d", max);
        printf("\nSmallest element in matrix:%d", min);


}