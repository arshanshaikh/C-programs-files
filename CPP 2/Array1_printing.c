//printing-> array, sum ,largest,smallest,odd, even.

#include <stdio.h>
void main()
{
    int a[10];
    int i, n, min, max, even = 0, odd = 0, sum = 0;
    printf("Enter how many array you want to print:\n");
    scanf("%d", &n);

    printf("Enter %d element in array:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d] element are:\n", i);
        scanf("%d", &a[i]);
    }
    printf("Array element are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    min = a[0];
    max = a[0];

    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];

        if (a[i] > max)
        {
            max = a[i];
        }
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
        }
        if (a[i] % 2 == 1)
        {
            odd++;
        }
        sum=sum+a[i];
    }
    printf("\nSmalllest element in the array is=%d", min);
    printf("\nLargest element in the array is=%d", max);
    printf("\nEven element in the array is=%d", even);
    printf("\nOdd element in the array is=%d", odd);
    printf("\nSum of all element in the array is=%d", sum);
}