#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    int i, j, n, temp = 1;
    printf("Enter no. of lines in pattern: ");
    scanf("%d",&n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ",j);
            // temp++;
        }
        printf("\n");
    }
}