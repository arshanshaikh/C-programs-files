#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
void Swap(int *a,int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
    printf("After Swapping (in Swap function)\nValue of a = %d\nValue of b = %d\n",*a,*b);
}
void main () {    
    int a, b;
    a = 10;
    b = 28;
    printf("Before Swapping (in main function)\nValue of a = %d\nValue of b = %d\n",a,b);
    Swap(&a,&b);
    printf("After Swapping (in main function)\nValue of a = %d\nValue of b = %d\n",a,b);
}