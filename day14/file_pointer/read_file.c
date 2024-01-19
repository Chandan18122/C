#include<stdio.h>
#include<string.h>

void main(){
	char ch;
	FILE *fp;
	fp = fopen("hello.txt","r");
	while(1){
		ch = getc(fp);
		if(ch==EOF){
			break;
		}
		printf("%c",ch);
	}
}
