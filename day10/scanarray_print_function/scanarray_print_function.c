#include<stdio.h>
// make function for scan and print array

void scanArray(int a[], int n){
	printf("Enter the element of array : ");
	for(int i = 0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void printArray(int a[], int n){
	for(int i = 0;i<n;i++){
		printf("Array [%d] : %d\n",i,a[i]);
	}
}

void main(){
	int a[10];
	int b[5];
	scanArray(a, 10);
	printArray(a, 10);
	scanArray(b, 5);
	printArray(b, 5);
}
