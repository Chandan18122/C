#include<stdio.h>
//function for iseven and find the even no between 1 to 1000

int iseven(int n){
	if(n%2 == 0){
		return 1;
	}
	else {
		return 0;
	}
}

void main(){
	int n;
	printf("Enter the number to print even upto : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(iseven(i)){
			printf("%d is even\n",i);
		}
	}
}
