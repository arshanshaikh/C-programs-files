#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<string.h>
int lengthOfString(char str[]){
    int l = 0;
    while(str[l] != '\0'){
        l++;
    }
    return l;
}
void main () {    
    char sent[100],rsent[100];
    int i,j,k,start,end,len1,len2;
    printf("Enter a sentence : ");
    gets(sent);
    // printf("\nSentence : %s",sent);
    // printf("\nRSentence : %s\n",rsent);    
    len1 = lengthOfString(sent);
    len2 = 0;
    // printf("\nlen1 = %d",len1);
    // printf("\nlen2 = %d",len2);
    end = len1;
    for(i=len1-1; i>=0; i--){
        if(sent[i]==' ' || i==0){
            start = (i!=0)?i+1:0;
            printf("\nStart = %d,End = %d\n",start,end);
            
            if(len2 != 0)
                len2 = lengthOfString(rsent);
            
            printf("\nk = %d",len2);
            for(j=start,k=len2; j<end; j++,k++){
                rsent[k] = sent[j];
                // printf("\n%c",rsent[k]);
            }
            rsent[k] = ' ';
            k++;
            printf("\nRsent = ");
            puts(rsent);
            end = start-1;
            len2=lengthOfString(rsent);
        }
    }
    printf("\nSentence : %s",sent);
    printf("\nSentence Reversed: ");
    for(i=0;i<lengthOfString(rsent);i++){
        printf("%c",rsent[i]);
    }
    printf("\nSentence Reversed: %s",rsent);
}