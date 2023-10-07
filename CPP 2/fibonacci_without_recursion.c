#include<stdio.h>

void Fibonacciwithoutrecursion(int n){
    int i,a=0,b=1,c;
    printf("Fibonacci sries:\n");
    printf("%d\t %d\t",a,b);

    for(i=1;i<n-1;i++){
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
}


void main(){
    int n;
    printf("Enter the number of elements you want to print:\n");
    scanf("%d",&n);
    Fibonacciwithoutrecursion(n);
    
}