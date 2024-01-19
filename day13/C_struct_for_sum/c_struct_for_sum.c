#include <stdio.h>
//sum using structure
typedef struct value{
    int x;
    int y;
}value;

value sum(value a, value b){
    value sum;
    sum.x = a.x+b.x;
    sum.y = a.y+b.y;
    return sum;
}
int main()
{
    value a,b;
    a.x=10,a.y=20;
    b.x=50,b.y=60;
    value c = sum(a, b);
    printf("Sum of x : %d\n",c.x);
    printf("Sum of y : %d\n",c.y);
    return 0;
}

