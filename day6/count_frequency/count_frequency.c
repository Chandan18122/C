//count frequency of each element
#include <stdio.h>

int main()
{
    int n,i,count;
    printf("enter the length of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the value of the array element : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        count = 0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count += 1;
            }
        }
        printf("%d is %d times.\n",arr[i],count);
    }
    return 0;
}
