#include<stdio.h>
//scan and print two dimension array 

void scanArray(int *s, int r, int c){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			//s = ;			
			scanf("%d",(s + (i*r)) + j);
			
		}
	}
}
void printArray(int *p, int r, int c){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("arr[%d][%d] = %d\n",i,j,*((p +(i * r))+ j));
		}
		printf("\n");
	}
	printf("\narr[2][1] = %d\n",*((p + 6)+1));
}
/*
void printArrayp(int b[r][c], int r, int c){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("arr[%d][%d] = %d\n",i,j,b[i][j]);
			
		}
		printf("\n");
	}
}
*/
void main(){
	int m,n;
	printf("Enter the two dimansion array m x n : ");
	scanf("%d%d",&m,&n);
	int a[m][n];
	scanArray(&a[0][0], m, n);
	printArray(&a[0][0], m, n);
	//printArrayp(a[m][n], m, n);
	printf("x = %d ",a[2][1]);
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("arr[%d][%d] = %d\n",i,j,a[i][j]);
			
		}
		printf("\n");
	}
	
}
