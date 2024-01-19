//chack Arnstrong number.
#include <stdio.h>

int main()
{
    int n,sum=0,rem;
    printf("Enter the number : ");
    scanf("%d",&n);
    int temp =n;
    
    while(n>0){
        rem = n%10;
        sum = sum + rem*rem*rem;
        n=n/10;
    }
    if(temp == sum){
        printf("Arnstrong number : %d",sum);
    }
    else{
        printf("number is not arnstrong number.");
    }
    return 0;
}

