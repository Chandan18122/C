// Happy number
#include <stdio.h>

int main()
{
    int hp,rem,sum,flage=0;
    printf("Enter the number : ");
    scanf("%d",&hp);
    int tamp = hp;
    for(int i=0; i <10;i++){
        sum = 0;
        while(hp>0){
            rem = hp%10;
            sum += rem *rem;
            hp = hp/10;
        }
        hp = sum;
        if(hp == 1){
            flage = 1;
        }
    }
    if(flage == 1){
        printf("%d is Happy number.",tamp);
    }
    else{
        printf("%d is not Happy number.",tamp);
    }
    return 0;
}

