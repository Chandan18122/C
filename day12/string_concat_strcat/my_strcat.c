#include<stdio.h>
#include<string.h>
// create function strcat()

void my_strcat(char* str1, char* str2){
	char* p = str1;
	while(*p != '\0'){
		p++;
    }
	while(*str2 != '\0'){
		*p = *str2;
		str2++;
		p++;
	}
	*p = '\0';
}

void main(){
	char str1[] = "chandan";
	char str2[] = " kumar";
	printf("string1 = %s \nstring2 =%s\n",str1, str2);	
	//strcat(str1,str2);
	//printf("concat string = %s\n",str1);
	my_strcat(str1, str2);
	printf("concat string = %s\n",str1);
}
