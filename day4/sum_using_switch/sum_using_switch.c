#include <stdio.h>

int main()
{
    int a,b, choise,c;
    printf("Enter the two number : ");
    scanf("%d %d",&a,&b);
    printf("Enter the choise 1 for addition, 2 for the substruction, 3 for multiplication, 3 for devision : ");
    scanf("%d",&choise);
    switch(choise){
        case 1:
            c = a+b;
            printf("sum = %d",c);
            break;
        case 2:
            c = a-b;
            printf("subtraction = %d",c);
            break;
        case 3:
            c = a*b;
            printf("multiplication = %d",c);
            break;
        case 4:
            c = a/b;
            printf("result = %d",c);
            break;
        default:
            printf("woring choise.");
            break;
    }

    return 0;
}

