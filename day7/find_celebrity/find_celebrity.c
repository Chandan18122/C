#include<stdio.h>
//find celebrity

int main(){
	int n,m,sum;
	printf("Enter the no. of persion : ");
	scanf("%d",&n);
	m=n;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j =0;j<m;j++){
		printf("Enter 1 for know and 0 for not know of [%d][%d] : ",i,j);
		scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		sum =0;
		for(int j =0;j<m;j++){
			sum += arr[i][j];
		}
		if(sum == 0){
			int j=i;
			for(int k=0;k<n;k++){
				sum += arr[k][j];
			}
			if(sum == n-1){
				printf("Celebrity : %d",i);
			}
		}
	}
	return 0;
}
