#include<stdio.h>
//function for isprime find the prime no. betweent 1 to n

int isprime(int n){
	int flag = 0;
	if(n == 0||n==1){
		flag = 1;
	}
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			flag = 1;
			break;
		}	
	}
	if(flag == 0){
		return 1;
	}
	else {
		return 0;
	}
}

void main(){
	int n;
	printf("Enter the number to print prime no. upto n : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(isprime(i)){
			printf("%d ",i);
		}
	}
}
