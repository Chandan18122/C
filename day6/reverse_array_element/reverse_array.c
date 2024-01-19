//reverse array
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
    for(i=0;i<n;i++){
        printf("array[%d] array = %d\n",i,arr[i]);
    }
    //reverse
    int re[n];
    for(i=0;i<n;i++){
        re[(n-1)-i]= arr[i];
    }
    for(i=0;i<n;i++){
        printf("reverse[%d] array = %d\n",i,re[i]);
    }
}

