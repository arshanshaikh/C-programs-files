#include<stdio.h>
int fibonacciwithrecursion(int i){
    
    if(i==0){
        return 0;
    }

    else if(i==1){
        return 1;
    }
    else
    return fibonacciwithrecursion(i-1)+fibonacciwithrecursion(i-2);
    
    }

void main(){
        int n,i;
        printf("Enter the how many number you want to print:\n");
        scanf("%d",&n);
        for(i=0;i<n;i++){
           
            printf("%d\t",fibonacciwithrecursion(i));
        }
    }
