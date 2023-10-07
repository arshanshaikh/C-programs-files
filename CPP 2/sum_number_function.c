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
int SumR(int n){
    //n! = n*(n-1)!
    if(n==1)
        return 1;
    else
        return n+SumR(n-1);
}
void main()
{
    int num, Sum;
    printf("Enter number:");
    scanf("%d",&num);
    Sum = SumR(num);
    printf("Factorial of %d = %d",num,Sum); 
}