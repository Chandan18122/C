//Cyclically rotate an array by one
#include <stdio.h>

int main()
{
    int n,i;
    printf("enter the length of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the value of the array element : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("array[%d] = %d\n",i,arr[i]);
    }
    int tamp=arr[0];
    for(i=0;i<n-1;i++){
        arr[i]=arr[i+1];
        printf("Cyclically_array[%d] = %d\n",i,arr[i]);
    }
    printf("Cyclically_array[%d] = %d",n-1,tamp);
    return 0;
}
