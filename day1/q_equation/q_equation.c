/*	(q) find the value of given equation.
	 R = X^3+ X^2+2*x+5
	 S = X^2+ y^2+2*x*y-10
*/
#include <stdio.h>

int main()
{
    int x, y,p,s;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the value of y : ");
    scanf("%d",&y);
    p = x*x*x + x*x + 2*x+ 5;
    s = x*x + y*y + 2*x*y- 10;
    printf("P = %d \nS = %d",p,s);
    return 0;
}

