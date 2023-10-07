#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<string.h>
void main () {    
    char a[100],b[100];
    int cmp;
    printf("Enter first string : ");
    gets(a);
    printf("Enter second string : ");
    gets(b);
    cmp = strcmp(a,b);
    if(cmp==0){
        printf("String 'a' is equal to string 'b'");
    }
    else if(cmp<0){
        printf("String 'a' is smaller than string 'b'");
    }
    else {
        printf("String 'a' is greater than string 'b'");
    }

    strrev(a);
    printf("\nReverser of 'a' = %s",a);
}