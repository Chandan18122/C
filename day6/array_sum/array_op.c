//find min max, average, sum of array
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
    //sum
    int sum=0;
    for(i=0;i<n;i++){
        sum += arr[i];
    }
    printf("aum of array = %d\n",sum);
    //average
    float avg;
    avg = sum/n;
    printf("average of the array : %.2f\n",avg);
    
    //min
    int min = arr[0];
    for(i=0;i<n;i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    printf("min = %d\n",min);

    //max
    int max = arr[0];
    for(i=0;i<n;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    printf("max = %d\n",max);
    // for search
    int s;
    printf("enter the no. for search in array : ");
    scanf("%d",&s);
    for(i=0;i<n;i++){
        if(s == arr[i]){
            printf("no. is found in the array.");
            break;
        }
        if(arr[i] == n){
            printf("no. is not fount in th array.");
        }
    }
    return 0;
}


