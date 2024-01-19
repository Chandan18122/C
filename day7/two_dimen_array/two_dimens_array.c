#include<stdio.h>
// scan and print two dimansion array

int main(){
	int n,m,i,j;
	printf("Enter the no. of row and colum : ");
	scanf("%d%d",&n,&m);
	int arr[n][m];
	for(i=0;i<n;i++){
		for(j =0;j<m;j++){
		printf("Enter the element of [%d][%d] : ",i,j);
		scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(j =0;j<m;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
