#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int ar1[10],ar2[10],ar3[10],ar4[10];
    int n, i, j, dup, count, rep, ele;

    printf("Enter no. of elements to store in array: ");
    scanf("%d",&n);

    printf("Enter %d values for array: \n",n);
    for(i=0;i<n;i++){
        printf("Enter a[%d] value: ",i);
        scanf("%d",&ar1[i]);
    }

    //Copying elements from for first array to second array
    for(i=0;i<n;i++){
        ar2[i] = ar1[i];
    }

    count = 1;
    //first 
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(ar1[i] == ar2[j]){
                ar3[j] = count;
                count++;
            }
        }
        ar4[i] = count-1;
        count=1;
    }

    // printf("Array Elements: \n");
    // for(i=0;i<n;i++){
    //     printf("%d\t",ar1[i]);
    // }
    // printf("\nArray Elements Count: \n");
    // for(i=0;i<n;i++){
    //     printf("%d\t",ar3[i]);
    // }

    dup = 0;
    for(i=0;i<n;i++){
        if(ar3[i] > 1){
            dup++;
        }
    }
    printf("\nTotal no. of elements wiht duplicate values is %d",dup);
    
    // for(i=0;i<n;i++){
    //     if(ar3[i] > 1){
    //         rep = ar3[i];
    //         ele = ar1[i];
    //         printf("\nThe array element %d is repeated %d times in the array.",ele,rep);
    //     }
    // }

    printf("Array Elements: \n");
    for(i=0;i<n;i++){
        printf("%d\t",ar1[i]);
    }
    printf("\nTotal Array Elements Count: \n");
    for(i=0;i<n;i++){
        printf("%d\t",ar4[i]);
    }

    for(i=0;i<n;i++){
        printf("\nThe array element %d is repeated %d times in the array.",ar1[i],ar3[i]);
    }

    // for(i=0;i<n;i++){
    //     if(ar3[i] > 1){
    //         rep = ar4[i];
    //         ele = ar1[i];
    //         printf("\nThe array element %d is repeated %d times in the array.",ele,rep);
    //     }
    // }
}