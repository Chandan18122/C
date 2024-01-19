/*(a) Ramesh’s basic salary is input through the keyboard. 
His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. 
Write a program to calculate his gross salary.*/
	
#include <stdio.h>
int main() {
    	float a,b,c;
   	printf("Enter your basic salary : ");
    	scanf("%f",&a);
    	b= a*.4;
    	printf("your dearness : %10.2f",b);
    	c = a*.2;
    	printf("\nYour House rent : %10.2f",c);
    	printf("\nYour gross salary : %10.2f",a+b+c);
    	return 0;
}



