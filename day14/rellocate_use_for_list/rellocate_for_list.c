#include<stdio.h>
#include<stdlib.h>
//rellocate for list

int main(){
	int *list =(int *)malloc(3 * sizeof(int));
	if(list == NULL){
		return 1;
	}
	printf("Enter the list value : ");
	for(int i=0;i<3;i++){
		scanf("%d",&list[i]);
	}	
	for(int i=0;i<3;i++){
		printf("list[%d] = %d\n",i,list[i]);
	}
	//list of size 4

	int *tmp =(int *)realloc(list, 4 * sizeof(int));
	if(tmp == NULL){
	    free(list);
		return 1;
	}
	list = tmp;
	list[3] = 4;
	for(int i=0;i<4;i++){
		printf("new list[%d] = %d\n",i,list[i]);
	}
	return 0;
}
