/*(i) If a four-digit number is input through the keyboard,
write a program to obtain the sum of the first and last digit of this number.
*/
#include <stdio.h>

void main()
{
    int n;
    printf("Enter the four digit number : ");
    scanf("%d",&n);
    int d1,d4;
    d1 = n%10;
    d4 = n/1000;
    printf("Sum of the first and last digit of this number : %d",d1+d4);
}
