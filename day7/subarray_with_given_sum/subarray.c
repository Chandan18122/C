#include<stdio.h>
//subarray with given sum
int main(){
	int n, i;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	int arr[n];
	for(i=0; i<n; i++){
		printf("Enter the element of the array %d : ",i);
		scanf("%d",&arr[i]);
	}
	int sub,sum;
	printf("\nEnter the sum of sub-array value : ");
	scanf("%d",&sub);
	for(i=0;i<n;i++){
		sum =arr[i];
		for(int j=i+1;j<n;j++){
			sum +=arr[j];
			if(sum == sub){
				int start = i,end = j;
				printf("sub-array is : ");
				for(int k=start;k<=j;k++){
					printf("%d ",arr[k]);
				}
				printf("\n");
			}
		}
		
	}
	return 0;
}
