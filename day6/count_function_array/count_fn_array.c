//count positive, negative, zero, odd, even number in array
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
    //positive
    int cp=0;
    for(i=0;i<n;i++){
        if(arr[i]>0){
            cp += 1;
        }
    }
    printf("Positive number : %d\n",cp);
    //negative
    int cn=0;
    for(i=0;i<n;i++){
        if(arr[i]<0){
            cn += 1;
        }
    }
    printf("Negative number : %d\n",cn);
    //zero
    int cz=0;
    for(i=0;i<n;i++){
        if(arr[i]==0){
            cz += 1;
        }
    }
    printf("Zero number : %d\n",cz);
    //even
    int ce=0;
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            ce += 1;
        }
    }
    printf("Even number : %d\n",ce);
    //odd
    int co=0;
    for(i=0;i<n;i++){
        if(arr[i]%2!=0){
            co += 1;
        }
    }
    printf("Odd number : %d\n",co);
}
