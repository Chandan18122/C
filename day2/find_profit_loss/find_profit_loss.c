/*If cost price and selling price of an item is input through the keyboard, write a 
program to determine whether the seller has made profit or incurred loss. Also 
determine how much profit
he made or loss he incurred
*/
#include <stdio.h>

int main()
{
    float bp,sp, profit;
    int q;
    printf("Enter the Buying Prise : ");
    scanf("%f",&bp);
    printf("Enter the Selling Prise : ");
    scanf("%f",&sp);
    printf("Enter the no. of Quentity : ");
    scanf("%d",&q);
        
    profit = (sp - bp)*q;
    if(profit >= 0){
        printf("Profit : %.2f",profit);
    }
    else{
        printf("Loss : %.2f",profit);
    }
    return 0;
}


