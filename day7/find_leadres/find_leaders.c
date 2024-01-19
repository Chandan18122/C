#include<stdio.h>

int main(){
	int n,i;
	printf("Enter the length of array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the element of the array : ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int max = arr[n-1];
	for(i=n-1;i>=0;i--){
		
		if(arr[i]>=max){
		    max = arr[i];
		    printf("Leader : %d\n",arr[i]);
		}
	}
	/*
	for(i=0;i<n;i++){
		int fg = 0;
		for(int j=i+1;j<n;j++){
			if(arr[i] <=arr[i+1]){
				fg = 1;
				break;
			}
		}
		if(fg != 1){
			printf("Leader : %d\n",arr[i]);
		}
	}*/
	return 0;
}
	
