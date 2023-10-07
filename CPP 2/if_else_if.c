#include<stdio.h>
#include<conio.h>

void rectangle(){
	//declaration
	float area,length,breadth;
	//input
	printf("\nEnter the length and breadth :\n");
	scanf("%f %f",&length,&breadth);
	//process
	area =length*breadth;
	//output
	printf("The area is  :%f\n",area);
	
}

void circle(){
	//declaration
	float area,radius;
	//input
	printf("\nEnter the radius :\n");
	scanf("%f",&radius);
	//process
	area =3.14*radius*radius;
	//output
	printf("The area is  :%f\n",area);
	
}
void triangle(){
	//declaration
	float area,base,height;
	//input
	printf("\nEnter the base and height :\n");
	scanf("%f %f",&base,&height);
	//process
	area =0.5*base*height;
	//output
	printf("The area is  :%f\n",area);
	
}
void main(){
	int choice;
	printf("Availabe option :\n1-Rectangle calculation\n2-Circle calculation \n3-Triangle calculation\n");
	printf("Enter your choice(1/2/3)\n");
	scanf("%d",&choice);
	
	if (choice==1){
		printf("***Rectangle calculation***");
		rectangle();
	}
	else if (choice==2){
		printf("***Circle calculation***");
		circle();
	}
	else if (choice ==3){
		printf("***Triangle calculation***");
		triangle();
	}
	
	else{
		printf("Wrong choice!");
	}
	
	
}