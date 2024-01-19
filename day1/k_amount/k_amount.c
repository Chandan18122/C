/*(k) A cashier has currency notes of denominations 10, 50 and 100.
If the amount to be withdrawn is input through the keyboard in hundreds,
find the total number of currency notes of each denomination 
the cashier will have to give to the withdrawer.
*/
#include <stdio.h>

int main()
{
    int amount, ten, fifty, hundreds;
    printf("Enter the amount to be withdrawn : ");
    scanf("%d",&amount);
    ten = amount /10;
    fifty = amount/50;
    hundreds = amount/100;
    printf("Total no. of currency notes of each denomination : ");
    printf("\nTen = %d\nFifty = %d\nhundreds = %d",ten, fifty, hundreds);
    return 0;
}
