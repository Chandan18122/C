/* Print the multiplication table of given number in below format. Ask user to enter number
10*1=10
10*2=2
*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the no. want table : ");
    scanf("%d",&n);
    for(int i =1;i<=10;i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}

