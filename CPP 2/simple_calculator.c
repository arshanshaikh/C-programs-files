#include<stdio.h>
#include<conio.h>

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
	printf("Availabe option :\n1-Addition calculation\n2-Subtraction calculation \n3-Multiplication calculation\n4-Division caculation\n");
	printf("Enter your choice(1/2/3/4)\n");
	scanf("%d",&choice);
	
	if (choice==1){
		printf("***Addition calculation***");
		Addition();
	}
	else if (choice==2){
		printf("***Subtraction calculation***");
		Subtraction();
	}
	else if (choice ==3){
		printf("***Multiplication calculation***");
		Multiplication();
	}
	else if (choice ==4){
		printf("***Division calculation***");
		Division();
	}
	else{
		printf("Wrong choice!");
	}
	
	
}