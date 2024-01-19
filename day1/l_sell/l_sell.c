/*(l) If the total selling price of 15 items and 
the total profit earned on them is input through the keyboard,
write a program to find the cost price of one item. 
*/
#include <stdio.h>

int main()
{
    int sp, profit;
    printf("Enter the selling price : ");
    scanf("%d",&sp);
    printf("Enter the profit : ");
    scanf("%d",&profit);
    float cp = sp * 15 - profit;
    printf("cost of one items : %.2f",cp/15);

    return 0;
}
