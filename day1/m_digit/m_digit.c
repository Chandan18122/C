/*(m) If a five-digit number is input through the keyboard, 
	write a program to print a new number by adding one to each of its digits.
	For example if the number is 12391 then the output should be displayed as 23402.
*/
#include <stdio.h>
	
int main(){
	    int num, d1,d2,d3,d4,d5,rev;
	    printf("Enter five digit number : ");
	    scanf("%d",&num);
	    d1 = (num%10 + 1)%10;
	    num = num/10;
	    d2 = (num%10 + 1)%10;
	    num = num/10;
	    d3 = (num%10 + 1)%10;
	    num = num/10;
	    d4 = (num%10 + 1)%10;
	    num = num/10;
	    d5 = (num%10 + 1)%10;
	    num = num/10;
	    rev = d1+ 10*d2+ 100*d3+ 1000*d4+ 10000*d5;
	    printf("\nrep digit is %d", rev);
	    return 0;
}

