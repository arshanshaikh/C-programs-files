#include <stdio.h>
void main()
{
    int a[20];
    int i, n, pos = 0;
    int small;
    printf("Enter the number of elements in the array:");
    scanf("%d", &n);

    printf("\nEnter the %d elements:",n);
    for (i = 0; i < n; i++){
        printf("\nEnter element : ");
        scanf("%d", &a[i]);
    }
    small = a[0];
    pos = 0;
    for(i=0;i<n;i++){
        if(a[i] < small){
            small = a[i];
            pos = i;
        }
    }
    printf("\nSmallest element is:%d",small);
    printf("\nThe position of the smallest element in the array is:%d",pos+1);
}