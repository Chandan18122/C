/*While purchasing certain items, a discount of 10% is offered if the quantity 
purchased is more than 1000. If quantity and price per item are input through the 
keyboard, write a program
to calculate the total expenses.
*/
#include <stdio.h>

int main()
{
    int item,price;
    float total;
    printf("Enter the quantity of the items : ");
    scanf("%d",&item);
    printf("Enter the price : ");
    scanf("%d",&price);
    total = item * price;
    if(item > 1000){
        total *= .9; 
    }
    printf("Total amount : %.2f",total);
    return 0;
}

