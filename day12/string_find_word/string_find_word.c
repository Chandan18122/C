#include<stdio.h>
#include<string.h>
//to find the word int the sectence

void main() {
	char str[] = "this is chandan";
	char word[] = "an";
	int f,count=0;;
	for(int i=0;i<strlen(str)+ 1- strlen(word);i++){
	    f = 1;
	    for(int j=0;j<strlen(word);j++){
		    if(str[i+j] != word[j]){
		        f=0;
		    }
		}
		if(f == 1){
	        count +=1;
	    }
	}
	printf("%s word is match %d times",word,count);
}

