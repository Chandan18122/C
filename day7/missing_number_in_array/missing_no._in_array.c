#include<stdio.h>
int main(){
	int n, i;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	int sum = (n*(n+1))/2;
	int arr[n-1];
	for(i=0; i<n-1; i++){
		printf("Enter the element of the array %d : ",i);
		scanf("%d",&arr[i]);
	}
	int asum = 0;
	for(i=0; i<n-1;i++){
		asum += arr[i];
	}
	int miss = sum - asum;
	printf("Missing number : %d",miss);
	return 0;
}
