#include<stdio.h>
int FibonacciWithRecursion(int i){
    if(i==0)
        return 0;
    else if(i==1)
        return 1;
    else
        return FibonacciWithRecursion(i-1)+FibonacciWithRecursion(i-2);
}
// void FibonacciWithoutRecursion(int n){
//     int a=0,b=1,c;
//     printf("Fibonacii series\n");
//     printf("%d\t %d\t",a,b);

//     for(int i=1;i<n;i++){
//         c=a+b;
//         printf("%d\t",c);
//         a=b;
//         b=c;
//     }
// }
//     //FibonacciWithoutRecursion(n);
void main(){
    int n,i;    
    printf("Enter no. of elements to print from series: ");
    scanf("%d",&n);
//     FibonacciWithoutRecursion(n);
    //Fibonacci With Recursion
    for(i=0;i<n;i++){
        printf("%d\t",FibonacciWithRecursion(i));
    }
}