/*	(f) Two numbers are input through the keyboard into two locations C and D.
Write a program to interchange the contents of C and D.
*/
#include <stdio.h>

void main()
{
    int a,b;
    printf("Enter the two numbers :");
    scanf("%d%d",&a,&b);
    printf("C = %d \nD = %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swaped numbers\nC = %d \nD = %d",a,b);
}



