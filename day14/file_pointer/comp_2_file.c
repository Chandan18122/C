#include<stdio.h>
#include<string.h>
//comper two file 
void main(){
	char ch1, ch2;
	FILE *fp1, *fp2;
	fp1 = fopen("hello.txt","r");
	fp2 = fopen("hi.txt","r");
	int f=0,c1=0,c2=0;
	while(1){
		ch1 = getc(fp1);
		ch2 = getc(fp2);
		if(ch1==EOF&&ch2==EOF){
			break;
		}
		if(ch1 !=EOF){
			c1++;
		}
		if(ch2 !=EOF){
			c2++;
		}
		if(ch1 != ch2){
			f=1;
			break;
		}
		
	}
	if(f==0 && c1==c2){
		printf("file is same.");
	}
	else{
		printf("file is not same.");
	}
}
