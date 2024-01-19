//copy of array
#include <stdio.h>

int main()
{
    int n,i;
    printf("enter the length of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the value of the array : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //copy
    int copy[n];
    for(i=0;i<n;i++){
        copy[i]= arr[i];
    }
    for(i=0;i<n;i++){
        printf("copy[%d] array = %d\n",i,copy[i]);
    }
}

