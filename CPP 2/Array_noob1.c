#include<stdio.h>
void main(){
    int n;
    int a[100],i;
    printf("Enter how many array you want to print:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("The %d array element :",i);
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    printf("Array Elements in Reverse\n");
    for(i=n-1;i>=0;i--){    // if we put i=n it will give you a garbage value.bcs it start from 0 and a number lesser than you print
        printf("%d\n",a[i]);
    }
}