#include<stdio.h>
#include<stdlib.h>
//list of size 3

int main(){
	int *list =(int *)malloc(3 * sizeof(int));
	if(list == NULL){
		return 1;
	}
//*
	printf("Enter the list value : ");
	for(int i=0;i<3;i++){
		scanf("%d",&list[i]);
	}
/*/
	list[0]=1;
	list[1]=2;
	list[2]=3;
*/	
	for(int i=0;i<3;i++){
		printf("list[%d] = %d\n",i,list[i]);
	}
	//list of size 4

	int *temp =(int *)malloc(4 * sizeof(int));
	if(temp == NULL){
		free(list);
		return 1;
	}
	for(int i=0;i<3;i++){
		temp[i]=list[i];	
	}
	temp[3] = 4;
	free(list);
	list = temp;
	for(int i=0;i<4;i++){
		printf("temp list[%d] = %d\n",i,list[i]);
	}
	
	return 0;
}
