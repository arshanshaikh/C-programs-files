#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
void main () {
   int i, n, user, comp,diff;
//    rand() % 50;
   /* 5 random numbers from 0 to 49 */
//    printf("%d\n", random(100));
//    printf("%d\n", random(100));
   comp = 65;
   i = 0;
   while(i<3){
        if(i>0){
            printf("\nTry again!!!");
        }
        printf("\nEnter your guess (from 1 to 100):");
        scanf("%d",&user);
        if(user == comp) {
            printf("\nYou guessed it right!!");
            break;
        }
        else if(user > comp) {
            diff = user-comp;
            if(diff <= 5){
                printf("\nGuessed number is a little high!!");
            }
            else {
                if(diff > 5 && diff <= 10) {
                    printf("\nGuessed number is a bit high!!");
                }
                else if(diff > 10 && diff <= 15) {
                    printf("\nGuessed number is a bit too high!!");
                }    
                else {
                    printf("\nYou are way off the mark!!");
                }
            }
        }
        else{
            diff = comp-user;
            if(diff <= 5){
                printf("\nGuessed number is a little low!!");
            }
            else {
                if(diff > 5 && diff <= 10) {
                    printf("\nGuessed number is a bit low!!");
                }
                else if(diff > 10 && diff <= 15) {
                    printf("\nGuessed number is a bit too low!!");
                }    
                else {
                    printf("\nYou are way off the mark!!");
                }
            }
        }
        printf("\n%d attempt(s) completed!!", i+1);
        i++;
   }
}