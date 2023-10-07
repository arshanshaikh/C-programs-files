#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void Rectangle(){
	//Declaration
	int area, length, breadth;
	
	//Input
	printf("\n\nEnter length and breadth : ");
	scanf("%d %d", &length, &breadth);
	
	//Process
	area = length * breadth;
	
	//Output
	printf("\nArea of Rectangle : %d", area);		
}
void Circle(){
	//Declaration
	float area, radius;     
	float pi = 3.14;
	//Input
	printf("\n\nEnter radius : ");
	scanf("%f", &radius);
	
	//Process
	area = pi * radius * radius;
	
	//Output
	printf("\nArea of Circle : %f", area);	
}
void Triangle(){
	//Declaration
	float area, base, height;
	
	//Input
	printf("\n\nEnter base & height : ");
	scanf("%f %f", &base, &height);
	
	//Process
	area = 0.5 * base * height;
	
	//Output
	printf("\nArea of Triangle : %f", area);	
}
void Wait(){
	printf("\n\nEnter any key to continue..");
	getch();
}
void main()
{
	int choice;
	do{
		system("cls");
		printf("\n****Area Calculation****\n");
		printf("Available operations : \n1. Rectangle Calculation\n2. Circle Calculation\n3. Triangle Calculation\n4. Exit\n");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
	//	if(choice == 1) {
	//		printf("***Rectangle Calculation***");
	//		Rectangle();
	//	}
	//	else if(choice == 2) {
	//		printf("***Circle Calculation***");
	//		Circle();		
	//	}
	//	else if(choice == 3) {
	//		printf("***Triangle Calculation***");
	//		Triangle();		
	//	}
	//	else {
	//		printf("Wrong Choice!");
	//	}
	
		switch(choice){
			case 1: printf("\n***Rectangle Calculation***");
					Rectangle();
					Wait();
					break;
			case 2: printf("\n***Circle Calculation***");
					Circle();		
					Wait();
					break;
			case 3: printf("\n***Triangle Calculation***");
					Triangle();	
					Wait();
					break;
			case 4: printf("\nExitting!!");
					break;
			default: printf("\nWrong choice!");
					Wait();
					break;
		}
	}while(choice!=4);
}