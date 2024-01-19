#include <stdio.h>
//use function

void sum1(int a, int b){
    int ans = a+b;
    printf("Sum = %d\n",ans);
}
void sum2(){
    int a,b;
    printf("Enter the value of a and b : ");
    scanf("%d%d",&a,&b);
    printf("Sum = %d\n",a+b);
}
int sum3(int a, int b){
    return a+b;
}
int sum4(){
    int a,b;
    printf("Enter the value of a and b : ");
    scanf("%d%d",&a,&b);
    return a+b;
}
void main(){
    int x=10,y=20;
    sum1(15, 25);
    sum1(x, y);
    sum2();
    int c = sum3(30,60);
    printf("sum = %d\n",c);
    printf("sum = %d\n",sum4());
    
}

