#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    int i, j, n;
    // printf("Enter no. of lines in pattern: ");
    // scanf("%d",&n);

    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j <= 5 - i; j--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}