/*In a company, worker efficiency is determined on the basis of the time required for 
a worker to complete a particular job. If the time taken by the worker is between 2 –
3 hours, then the worker is said to be highly efficient. If the time required by the 
worker is between 3 – 4 hours, then the worker is ordered to improve speed. If the 
time taken is between 4 – 5 hours, the worker is given training to improve his speed, 
and if the time taken by the worker is more than 5 hours, then the worker has to leave 
the company. If the time taken by the worker is input through the keyboard, find the 
efficiency of the worker.

*/
#include <stdio.h>

int main()
{
    float worktime;
    printf("Enter the time taken by the worker : ");
    scanf("%f",&worktime);
    if(.1 <= worktime && worktime<=3){
        printf("Highly efficient.");
    }
    else if(3 < worktime && worktime<=4){
        printf("improve speed.");
    }
    else if(4 < worktime && worktime<=5){
        printf("Give training to improve his speed.");
    }
    else{
        printf("The worker has to leave the company.");
    }

    return 0;
}


