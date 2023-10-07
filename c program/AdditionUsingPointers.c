#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
void Add(int *a, int *b, int *c){
    *c = *a + *b;
}
void main () {    
    int a, b, c;
    a = 10;
    b = 28;
    Add(&a,&b,&c);
    printf("%d+%d=%d",a,b,c);
}