#include<stdio.h>
//scan array using pointer

void pointer(int *p){
	*p = *p + 20;
	p = p + 1;
	int a = *p + 30;
	printf("p = %d ",*p);
	printf("a = %d ",a);
}
void scanArray(int *s, int n){
	for(int i=0;i<n;i++){
		scanf("%d",s);
		s = s + 1;
	}
}
void printArray(int *p, int n){
	for(int i=0;i<n;i++){
		printf("arr[%d] = %d\n",i,*p);
		p = p + 1;
	}
}
void main(){
	int n;
	printf("Enter the no. to scan the element of the array : ");
	scanf("%d",&n);
	int a[n];
	scanArray(a, n);
	printArray(a, n);
	printf("x = %d ",a[0]);
	pointer(a);
	printf("x = %d ",*a);
	
}
