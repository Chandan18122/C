#include<stdio.h>
#include<stdlib.h>
//add/remove items from a list using realloc

int main(){
	int n1;
	printf("Enter the size of list : ");
	scanf("%d",&n1);
	int *list =(int *)malloc(n1 * sizeof(int));
	if(list == NULL){
		return 1;
	}
	printf("Enter the list value : ");
	for(int i=0;i<n1;i++){
		scanf("%d",&list[i]);
	}	
	for(int i=0;i<n1;i++){
		printf("list[%d] = %d\n",i,list[i]);
	}
	int n2;
	printf("Enter new size of list : ");
	scanf("%d",&n2);
	int *tmp =(int *)realloc(list, n2 * sizeof(int));
	if(list == NULL){
		return 1;
	}
	if(n2>n1){
	    printf("Enter %d more number : ",n2-n1);
		for(int i=n1;i<n2;i++){
			scanf("%d",&list[i]);
		}
	}
	for(int i=0;i<n2;i++){
		printf("new list[%d] = %d\n",i,list[i]);
	}
	return 0;
}
