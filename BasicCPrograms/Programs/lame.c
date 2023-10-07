#include <stdio.h>
float sum (void);			//function declaration
float sum ()             //function definition
{
  float a, b,sum=0;
  printf ("Enter two number:");
  scanf ("%f%f", &a,&b);
  sum=a+b;
  printf("sum=%f",sum);
}

void main ()
{
  sum (); //function callling 
}
