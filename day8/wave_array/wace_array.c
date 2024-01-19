/*Given a sorted array arr[] of distinct integers. Sort the array into a wave-like array(In 
Place).
*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the length of attay : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp ;
    if(n%2==0){
        for(int i=0;i<n;i+=2){
            temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1] = temp;
        }
    }
    else {
        for(int i=0;i<n-1;i+=2){
            temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1] = temp;
        }
    }
    printf("Output : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

