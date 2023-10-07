#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void PrintArray(int arr[], int n){
    int i;
    printf("Array Elements: \n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
int MaxElementInArray(int arr[], int n){
    int i, max = arr[0];
    for(i=1;i<n;i++){    
        //Largest Element
        if(arr[i]>max){
            max = arr[i];
        } 
    } 
    return max;
}
int MinElementInArray(int arr[], int n){
    int i, min = arr[0];
    for(i=1;i<n;i++){    
        //Smallest Element
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
int CountOfEvenElements(int arr[], int n){
    int i, even=0;
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
    }
    return even;
}
int CountOfOddElements(int arr[], int n){
    int i, odd=0;
    for(i=0;i<n;i++){
        if(arr[i]%2!=0){
            odd++;
        }
    }
    return odd;
}
int SumOfArrayElements(int arr[], int n){
    int i, sum=0;
    for(i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}
int FindElementInArray(int arr[],int n, int key){
    int pos = -1, i;
    for(i=0; i<n; i++){
        if(arr[i] == key){
            pos = i;
            break;
        }
    }
    return pos;
}
// int RemoveElementFromArray(int arr[],int n, int key){
//     int pos, i;
//     pos = FindElementInArray(arr,n,key);
//     if(pos != -1){
//         for(i=pos; i<n; i++){
//             if(i==n)
//                 break;
//             else
//                 arr[i] = arr[i+1];
//         }
//         return 1;
//     }
//     else {
//         return -1;
//     }
// }
void main(){
    int a[100];
    int i,n,t,j,dup=0, key,pos;
    int smallest, largest,even=0,odd=0,sum=0;
    printf("Enter no. of elements to store in array: ");
    scanf("%d",&n);

    printf("Enter %d values for array: \n",n);
    for(i=0;i<n;i++){
        printf("Enter a[%d] value: ",i);
        scanf("%d",&a[i]);
    }
    PrintArray(a,n);
    
    // smallest = MinElementInArray(a,n);
    // printf("\nSmallest element in array = %d",smallest);
    // largest = MaxElementInArray(a,n);
    // printf("\nLargest element in array = %d",largest);

    printf("\nSmallest element in array = %d",MinElementInArray(a,n));
    printf("\nLargest element in array = %d",MaxElementInArray(a,n));
    printf("\nTotal no. of even elements in array = %d",CountOfEvenElements(a,n));
    printf("\nTotal no. of odd elements in array = %d",CountOfOddElements(a,n));
    printf("\nSum of all elements in array = %d",SumOfArrayElements(a,n));
    printf("\nEnter value to be searched in array : ");
    scanf("%d",&key);
    pos = FindElementInArray(a,n,key);
    // (cond)?True:False;
    (pos != -1)?printf("\nFound %d in array at position = %d",key,FindElementInArray(a,n,key)):printf("\n%d not found in array!! ",key);
    //Below code is same as previous line
    // if(pos != -1)
    //     printf("\nFound %d in array at position = %d",key,FindElementInArray(a,n,key));
    // else
    //     printf("\n%d not found in array!! ",key);
}