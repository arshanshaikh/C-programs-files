#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int a[10];
    int i,n,t,j,dup=0;
    int min, max,even=0,odd=0,sum=0;
    printf("Enter no. of elements to store in array: ");
    scanf("%d",&n);

    printf("Enter %d values for array: \n",n);
    for(i=0;i<n;i++){
        printf("Enter a[%d] value: ",i);
        scanf("%d",&a[i]);
    }
    printf("Array Elements: \n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }



    min = a[0];
    max = a[0];
    for(i=1;i<n;i++){
        //Smallest Element 
        if(a[i]<min){
            min = a[i];
        }
        
        //Largest Element
        if(a[i]>max){
            max = a[i];
        }
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            even++;
        }
        else if(a[i]%2==1){
            odd++;
        }
        sum = sum + a[i];
    }
    printf("\nSmallest element in array = %d",min);
    printf("\nLargest element in array = %d",max);
    printf("\nTotal no. of even elements ni array = %d",even);
    printf("\nTotal no. of odd elements in array = %d",odd);
    printf("\nSum of all elements in array = %d",sum);

    for(i=0;i<n;i++){
        t=a[i];
        for(j=0;j<n;j++){
            if(j==i)
                continue;
            if(t == a[j]){
                dup++;
            }
        }
    }
    printf("\nTotal duplicate elements in array = %d",dup);
}