#include<stdio.h>
#include<string.h>
//comper two file 
void main(){
	char ch;
	FILE *fp1, *fp2;
	fp1 = fopen("file1.txt","r");
	fp2 = fopen("file2.txt","w");
	do{
		ch = getc(fp1);
		putc(ch, fp2);
	}while(ch != EOF);
	fclose(fp1);
	fclose(fp2);
	printf("file copied successfully...");
}
