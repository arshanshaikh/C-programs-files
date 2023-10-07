#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
float Add(float n1,float n2){
    return n1+n2;
}
float Subtract(float n1,float n2){
    return n1-n2;
}
float Multiply(float n1,float n2){
    return n1*n2;
}
float Divide(float n1,float n2){
    return n1/n2;
}
int Modulus(float n1,float n2){
    return (int)n1%(int)n2;
}
void Wait(){
	printf("\n\nEnter any key to continue..");
	getch();
}
void main(){
    float num1, num2, result;
    int res, choice;
    do{
        system("cls");
        printf("******Calculator Program******");
        printf("\nAvailable Operations\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Modulus\n6. Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1 : system("cls"); 
                    printf("***Addition***");
                    printf("\n\nEnter two numbers : ");
                    scanf("%f %f",&num1,&num2);
                    result = Add(num1,num2);
                    printf("\n\nAddition result => %.2f + %.2f = %.2f",num1,num2,result);
                    Wait();
                    break;
            case 2 : system("cls"); 
                    printf("***Subtraction***");
                    printf("\n\nEnter two numbers : ");
                    scanf("%f %f",&num1,&num2);
                    result = Subtract(num1,num2);
                    printf("\n\nSubtraction result => %.2f - %.2f = %.2f",num1,num2,result);
                    Wait();
                    break;
            case 3 : system("cls"); 
                    printf("***Multiplication***");
                    printf("\n\nEnter two numbers : ");
                    scanf("%f %f",&num1,&num2);
                    result = Multiply(num1,num2);
                    printf("\n\nMultiplication result => %.2f * %.2f = %.2f",num1,num2,result);
                    Wait();
                    break;
            case 4 : system("cls"); 
                    printf("***Division***");
                    printf("\n\nEnter two numbers : ");
                    scanf("%f %f",&num1,&num2);
                    result = Divide(num1,num2);
                    printf("\n\nDivision result => %.2f / %.2f = %.2f",num1,num2,result);
                    Wait();
                    break;
            case 5 : system("cls"); 
                    printf("***Modulus***");
                    printf("\n\nEnter two numbers : ");
                    scanf("%f %f",&num1,&num2);
                    res = Modulus(num1,num2);
                    printf("\n\nModulus result => %d MOD %d = %d",(int)num1,(int)num2,res);
                    Wait();
                    break;
            case 6 : printf("Exitting..");
                    break;
            default : printf("Wrong Choice!!");
                    break;
        }
    }while(choice!=6);
}