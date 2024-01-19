//Equilibrium of array
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
        int ls=0,lr=0;
        for(int j=0;j<i;j++){
            ls += arr[i];
        }
        for(int k=i;k<n;k++){
            lr += arr[i];
        }
        if(ls == lr){
            printf("The equilibrium is at %d and value : %d",i, arr[i]);
            break;
        }
    }
    return 0;
}


