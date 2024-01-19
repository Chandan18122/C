#include<stdio.h>
//create structure using pointer and scan and print the data

struct student {
	int rollno;
	char name[10];
	int marks;
};
void main(){
	int n;
	printf("Enter the no want to scan the student record : ");
	scanf("%d",&n);
	struct student s[n],*p;
	printf("Enter the student roll no., name, marks : ");
	p=&s[0];
	for(int i=0;i<n;i++){
		scanf("%d%s%d",&p->rollno,p->name,&p->marks);
		p++;
	}
	p=&s[0];
	for(int i=0;i<n;i++){
		printf("Roll no. : %d\n",p->rollno);
		printf("Name : %s\n",p->name);
		printf("marks : %d\n",p->marks);
		p++;
	}

}
