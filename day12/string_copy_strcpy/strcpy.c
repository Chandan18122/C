#include<stdio.h>
#include<string.h>
// inbilt function strcpy()

void my_strcpy(char* str2, char* str1){
	char* p = str2;
	while(*str1 != '\0'){
		*p = *str1;
		str1++;
		p++;
	} 
	*p = '\0';
}

void main(){
	char str1[] = "chandan";
	char str2[30];
	//strcpy(str2,str1);
	//printf("string =  %s \ncopied string = %s\n",str1, str2);
	my_strcpy(str2, str1);
	printf("string =  %s \ncopied string = %s\n",str1, str2);
}

