#include<stdio.h>
//pointer function

void pointer(int *p){
	*p = *p + 20;
	int a = *p + 30;
	printf("p = %d ",*p);
	printf("a = %d ",a);
}
void main(){
	int x=10,y=20;
	x+=1;
	printf("x = %d ",x);
	pointer(&x);
	printf("x = %d ",x);
	printf("y = %d ",y+x);
	
}
