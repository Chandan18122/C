#include<stdio.h>
//link the next player

typedef struct cricket {
	char name[20];
	int score;
	struct cricket *next;
} cricket;

void main(){
	cricket c[3] = {{"kohli",76,c+1},{"Rothi",268,c+2},{"KL rahul",56,c}}, *p;
	p=&c[0];
	for(int i=0;i<3;i++){
		printf("%s\n",p->name);
		printf("%d\n",p->score);
		p=p->next;
	}
}
