#include<stdio.h>
//calculate the power of x^y

void powe(int x, int y){
	int p = 1;
	for(int i=1; i<=y; i++){
		p *= x;
	}
	printf("X power y is %d",p);
}
int powret(int x, int y){
	int p = 1;
	for(int i=1; i<=y; i++){
		p *= x;
	}
	return p;
}
void main(){
	int x,y;
	printf("Enter the value of x, y : ");
	scanf("%d%d",&x,&y);
	powe(x, y);
	
	int power = powret(x,y);
	printf("\nusing return : X power y is %d",power);
}
