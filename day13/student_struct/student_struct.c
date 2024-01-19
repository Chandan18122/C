#include<stdio.h>
//student data

typedef struct student {
	int rollno;
	char name[20];
	char dep[10];
	char course[10];
	int jyear;
} student;

void display(student *s, int x, int n){
	for(int i=0;i<n;i++){
		if(s->jyear == x){
			printf("Roll no. : %d\n",s[i].rollno);
			printf("Name : %s\n",s[i].name);
			printf("Strem : %s\n",s[i].dep);
			printf("Marks : %s\n",s[i].course);
			printf("Backlock : %d\n",s[i].jyear);
		}
	s++;
	}
}

void main(){
	int n,x;
	printf("Enter the no. of record want to enter : ");
	scanf("%d",&n);
	student s[n];
	printf("Enter the student roll no., name, department, Course, year of joining : ");
	for(int i=0;i<n;i++){
		scanf("%d%s%s%s%d",&s[i].rollno, s[i].name, s[i].dep, s[i].course, &s[i].jyear);
	}
	printf("Enter year you want to display the record : ");
	scanf("%d",&x);
	display(s, x, n);
	
}
