#include<stdio.h>
//find the factorial

int factorial(int f){
	int fact = 1;
	for(int i=1;i<=f;i++){
		fact *=i;
	}
	return fact;
}

void main(){
	int f;
	printf("Enter the number to find the factorial : ");
	scanf("%d",&f);
	int fact = factorial(f);
	printf("%d Factofial is %d",f, fact);
}
