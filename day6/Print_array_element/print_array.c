//print the array value
#include <stdio.h>

int main()
{
    int arr[10],i;
    printf("Enter the value of the array : ");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
        printf("arr[%d] = %d\n",i,arr[i]);
    }

    return 0;
}

