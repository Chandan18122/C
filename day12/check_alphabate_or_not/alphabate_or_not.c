#include<stdio.h>
#include<string.h>
//to check given string is alphabate or not if alphabet then print the string 

int isalphabet(char a){
	
	if(a >= 'A'&& a<='Z'||a >= 'a'&& a<='z'){
		return 1;
	}
	else {
		return 0;
	}
}

void main() {
	char arr[50] = "he1243ll42532o2424chand234an34";
	int j=0;
	for(int i=0;i<strlen(arr);i++){
		if(isalphabet(arr[i])){
			arr[j]= arr[i];
			j++;
		}
	}
	arr[j]='\0';
	printf("string = %s",arr);
}
