// prime number in the renge
#include<stdio.h>

int main()
{
    int no, flag =1,count=0;
    printf("Enter the renge 1 to n : ");
    scanf("%d",&no);
    for(int j=1;j<=no;j++){
        flag = 1;
        for(int i=2; i<=j/2;i++){
            if(j % i == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            count += 1;
            printf("%d ",j);
        }
    }
    printf("\nTotal prime number is %d",count);
    return 0;
}
