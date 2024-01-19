#include<stdio.h>
//find the food bill using function

int bill(int code, int q){
	int bill = 0,price;
	if(code == 101){
		price = 150;
	}
	if(code == 102){
		price = 200;
	}
	if(code == 103){
		price = 100;
	}
	if(code == 104){
		price = 80;
	}
	bill = q * price;
	return bill;
}

void main(){
	int code,q;
	printf("Enter the food of code (B-101,p-102,Bp-103,s-104 : ");
	scanf("%d",&code);
	printf("ENter the quentity : ");
	scanf("%d",&q);
	int tbill = bill(code, q);
	printf("Total bill = %d",tbill);
}
