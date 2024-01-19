// check two array element equal or not.
#include <stdio.h>

int main()
{
    int n,m,i,count;
    printf("enter the length of first array : ");
    scanf("%d",&n);
    printf("Enter the value of the array element : ");
    int arr1[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("enter the length of first array : ");
    scanf("%d",&m);
    int arr2[m];
    printf("Enter the value of the array element : ");
    for(i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<n;i++){
        count = 0;
        if(arr1[i]==arr2[i]){
            count +=1;
        }
        else{
            printf("Both array having different element.");
            break;
        }
    }
    if(count == 1){
        printf("Both array having same element.");
    }
    
    return 0;
}
