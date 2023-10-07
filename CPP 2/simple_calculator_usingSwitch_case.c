#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Wait(){
	printf("Enter any key to continue");
	getch();//pause karega key dabane tak agar ye nahi likha to operation bohat fast hogaa 
}

void Addition(){
	//declaration
	float sum,num1,num2;
	//input
	printf("\nEnter the num1 and num2 :\n");
	scanf("%f %f",&num1,&num2);
	//process
	sum =num1+num2;
	//output
	printf("The sum is  :%f\n",sum);
	
}

void Subtraction(){
	//declaration
	float sub,num1,num2;
	//input
	printf("\nEnter the num1 and num2 :\n");
	scanf("%f %f",&num1,&num2);
	//process
	sub =num1-num2;
	//output
	printf("The sub is  :%f\n",sub);
	
}
void Multiplication(){
	//declaration
	float mul,num1,num2;
	//input
	printf("\nEnter the num1 and num2 :\n");
	scanf("%f %f",&num1,&num2);
	//process
	mul =num1*num2;
	//output
	printf("The mul is  :%f\n",mul);
	
}
void Division(){
	//declaration
	float div,num1,num2;
	//input
	printf("\nEnter the num1 and num2 :\n");
	scanf("%f %f",&num1,&num2);
	//process
	div =num1/num2;
	//output
	printf("The div is  :%.2f\n",div);
	
}
void main(){
	
	int choice;
	do{
		system("cls");// clear the prevoius operation
	printf("Availabe option :\n1-Addition calculation\n2-Subtraction calculation \n3-Multiplication calculation\n4-Division caculation\n");
	printf("Enter your choice\n");
	scanf("%d",&choice);
	
	switch(choice){
			case 1:printf("***Addition Caculation***");
				Addition ();
				Wait();
				break;
			case 2:printf("***Subtraction Caculation***");
				Subtraction ();
				Wait();
				break;
			case 3:printf("***Multiplication Caculation***");
				Multiplication ();
				Wait();
				break;
			case 4:printf("***Division Caculation***");
				Division ();
				Wait();
				break;
			case 5:printf("***Exiting***");
			break;
			
			default:printf("***Wrong choice***");
			break;		
		
	}	
	}while(choice!=5);
}