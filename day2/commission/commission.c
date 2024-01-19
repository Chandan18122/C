/*A shopkeeper allows a commission for the ssles person.
    Item : Sales amount : Rate of commission
    CPU : <10000 null, >=10000 & <25000 8%, >=25000 rs2000 + 10% on sale amt in excess of
    Monitor : <10000 5%, >=10000 5% upto 10000 + 8% above.
*/
#include <stdio.h>

int main()
{
    int cpuamt, mamt, icpu,im;
    float commission, cpucommission, mcommission;
    printf("Enter the number of CPU item : ");
    scanf("%d",&icpu);
    printf("Enter the CPU amount : ");
    scanf("%d",&cpuamt);
    printf("Enter the number of Monitor : ");
    scanf("%d",&im);
    printf("Enter the Monitor amount : ");
    scanf("%d",&mamt);
    //for <10000 sales amount
    cpuamt *= icpu; 
    if(cpuamt<10000){
        cpucommission = 0.0;
    }
    if(cpuamt >= 10000 && cpuamt <25000){
        cpucommission = cpuamt * .08;
    }
    if(cpuamt>=25000){
        cpucommission = 2000 + (cpuamt- 25000)*.1;
    }
    //for monitor
    mamt *= im;
    if(mamt < 10000){
        mcommission = mamt * .05;
    }
    else{
        mcommission = 10000*.05 + (mamt -10000)* .08;
    }
    
    commission = cpucommission + mcommission;
    printf("\nCPU commission : %.2f",cpucommission);
    printf("\nMoneter commission : %.2f", mcommission);
    printf("\nTotal commission : %.2f",commission);
    return 0;
}
