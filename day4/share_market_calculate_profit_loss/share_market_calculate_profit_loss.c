// for share
#include <stdio.h>

int main()
{
    float bp,sp, bill,total =0,cp=0;
    int q,n=1;
    while(n!=0){
        printf("Enter the Buying Prise : ");
        scanf("%f",&bp);
        printf("Enter the Selling Prise : ");
        scanf("%f",&sp);
        printf("Enter the no. of Quentity : ");
        scanf("%d",&q);
        cp +=bp*q; 
        bill = (sp - bp)*q;
        if(bill >0){
            printf("Profit : %.2f",bill);
        }
        else{
            printf("Loss : %.2f",bill);
        }
        total += bill;
        
        printf("\nenter 1 for add more and 0 for end : ");
        scanf("%d",&n);
        
    }
    float percentage = (total /cp)*100;
    if(total >0){
        printf("Total Profit : %.2f\n",total);
        printf("Profit percentage : %.2f",percentage);
    }
    else{
        printf("Total Loss : %.2f\n",total);
        printf("Loss percentage : %.2f",percentage);
    }
    return 0;
}

