//chack pallindrome no.
#include <stdio.h>

int main()
{
    int n,sum=0,rem;
    printf("Enter the number : ");
    scanf("%d",&n);
    int temp = n;
    while(n>0){
        rem = n%10;
        sum = sum*10 + rem;
        n=n/10;
    }
    if(temp == sum){
        printf("No. is pallindrome. ");
    }
    else {
        printf("No. is not pallindrome.");
    }
    return 0;
}
