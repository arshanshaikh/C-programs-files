// ****1****
// ***121***
// **12321**
// *1234321*
// 123454321


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    int i, j, n;
   printf("Enter no. of lines in pattern: ");
    scanf("%d",&n);

   for(i=1;i<=n;i++){
       for(j=1;j<=n-i;j++){
           printf("*");
       }
       for(j=1;j<=i;j++){
           printf("%d",j);
       }
       for(j=i-1;j>=1;j--){
           printf("%d",j);
       }
       for(j=1;j<=n-i;j++){
           printf("*");
       }
   printf("\n");
   }
}