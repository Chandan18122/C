// prime number
#include<stdio.h>

int main()
{
    int no, flag =1;
    printf("Enter the number : ");
    scanf("%d",&no);
    for(int i=2; i<no;i++){
        if(no % i == 0){
            flag = 0;
            break;
        }
    }
    if(flag == 1){
        printf("%d is prime number.",no);
    }
    else {
        printf("%d is not prime number.",no);
    }
    return 0;
}

