/*(g) If a five-digit number is input through the keyboard,
write a program to calculate the sum of its digits. (Hint: Use the modulus operator ‘%’)
*/
#include <stdio.h>
int main(){
    int num, d1,d2,d3,d4,d5;
    printf("Enter five digit number : ");
    scanf("%d",&num);
    d1 = num%10;
    num = num/10;
    d2 = num%10;
    num = num/10;
    d3 = num%10;
    num = num/10;
    d4 = num%10;
    num = num/10;
    d5 = num%10;
    num = num/10;
    printf("sum of digit is %d",d1+d2+d3+d4+d5);
    return 0;
}
