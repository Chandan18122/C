//chack Arnstrong number 1 to n.
#include<stdio.h>

int main()
{
    int range,i,sum = 0, n,count=0,rem;
    printf("Enter the renge : ");
    scanf("%d",&range);
    
    for(i=1; i<=range;i++){
        n=i;
        sum=0;
        int temp =n;
        while(n>0){
            rem = n%10;
            sum = sum + rem*rem*rem;
            n=n/10;
        }
        if(temp == sum){
            count = count + 1;
            printf("%d is Arnstrong number.\n",sum);
        }
    }
    printf("Total Arnstrong number is  : %d",count);
    return 0;
}

