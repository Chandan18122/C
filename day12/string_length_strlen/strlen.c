#include<stdio.h>
#include<string.h>
// inbilt function strlen()

int my_strlen(char* str){
	int l = 0;
	while(*str != '\0'){
		l++;
		str++;
	} 
	return l;
}

void main(){
	char str[10] = "chandan";
	int l = strlen(str);
	printf("length of %s is %d\n",str, l);
	int myl = my_strlen(str);
	printf("length of %s is %d\n",str, myl);
}

