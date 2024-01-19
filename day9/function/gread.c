#include<stdio.h>
//find the gread using function

char gread(int m){
	char ans;
	if(m <=100 && m >80){
		ans = 'A';
	}
	else if(m <=80 && m >60){
		ans = 'B';
	}
	else if(m <=60 && m >=50){
		ans = 'C';
	}else {
		ans = 'F';
	}

	return ans;
}

void main(){
	int m;
	printf("Enter the marks : ");
	scanf("%d",&m);
	char ans = gread(m);
	printf("gread = %c",ans);
}
