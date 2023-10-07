#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// //Function Without Recursion
// int fact(int n){
//     //5 = 5*4*3*2*1
//     int i, factorial = 1;
    
//     for(i=1; i<=n; i++)
//         factorial = factorial*i;
//     return factorial; 
// }
//Function With Recursion
int factR(int n){
    //n! = n*(n-1)!  Mathematic General Formula
    //factR(n) = n*factR(n-1)   Programatic equivalent
    if(n==1)
        return 1;
    else
        return n*factR(n-1);
}
void main()
{
    int num, factorial;
    printf("Enter number:");
    scanf("%d",&num);
    factorial = factR(num);
    printf("Factorial of %d = %d",num,factorial); 
}