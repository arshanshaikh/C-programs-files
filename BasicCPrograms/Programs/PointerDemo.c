#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
void main () {    
    // * is the indirection operator
    // & is the address of operator
    int *p; // int pointer
    int x = 126; // int value
    int **p1; //Pointer to pointer
    p1 = &p;

    p = &x; //assigning address of x to pointer p 
    printf("Value of x : %d", x); //Value of x
    printf("\np = %x", p); // Address of x
    printf("\n*p = %d", *p); // Value of x
    printf("\np1 = %x", p1); // Value of p1
    printf("\n*p1 = %x", *p1); // Value of *p1
    printf("\n**p1 = %d", **p1); // Value of **p1
}