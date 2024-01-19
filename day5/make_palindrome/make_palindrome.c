//chack palindrome no if yes then print else make it number pallindrome.
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
        printf("No. is palindrome. ");
    }
    else {
        int new = temp /10;
        int newp = temp;
        while(new>0){
            rem = new%10;
            newp = newp*10 + rem;
            new=new/10;
        }
        printf("%d",newp);
    }
    return 0;
}
