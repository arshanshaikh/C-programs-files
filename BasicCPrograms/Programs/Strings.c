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
void CheckIfPalindrome(char str[]){
    char rev[100],temp;
    int i,len;
    len = lengthOfString(str);
    for(i=0;i<len;i++){
        rev[i] = str[i];
    }
    //For reversing original string
    for(i=0;i<len/2;i++){
        temp = rev[i];
        rev[i] = rev[len-i-1];// like 5-1-i.
        rev[len-i-1] = temp;
    }

    //Check if palindrome
    for(i=0;i<len;i++){
        if(str[i] != rev[i])
            break;
    }

    if(i==len) {
        printf("\nString is a palindrome!");
    }
    else {
        printf("\nString is not a palindrome!");
    }
}
void DisplayStringInReverse(char str[]){
    int len, i;
    len = lengthOfString(str);
    printf("\nString in reverse : ");
    for(i=len;i>=0;i--){
        printf("%c",str[i]);
    }
}
void main () {    
    char c[100];
    int i, len;
    printf("Enter a string : ");
    gets(c);
    len = lengthOfString(c);
    for(i = 0; i < len; i++) {
        printf("%c\t",c[i]);
    }
    printf("\nLength of String (Without string.h function)=%d",len);
    printf("\nLength of String (With string.h function)=%d",strlen(c));
    printf("\nString : ");
    puts(c); 
    DisplayStringInReverse(c);
    CheckIfPalindrome(c);
}