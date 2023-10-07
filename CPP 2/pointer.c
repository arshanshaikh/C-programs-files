#include<stdio.h>
int main(){
    int a,*a1;
    float b,*b1;
    a1=&a;
    b1=&b;
    printf(" %x \n %x\n",a1,b1);

    a1+2;
    b1++;

    printf("\n %x \n %x\n",a1,b1);
}