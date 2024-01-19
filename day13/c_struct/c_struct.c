#include<stdio.h>
//create structure for student

struct student {
	int rollno;
	char name[10];
	char class[10];
	int marks;
	int backlock;
};
void main(){
	struct student s[5];
	printf("Enter the student roll no., name, strem, marks, backlock : ");
	for(int i=0;i<3;i++){
		scanf("%d%s%s%d%d",&s[i].rollno, s[i].name, s[i].class, &s[i].marks, &s[i].backlock);
	}
	for(int i=0;i<3;i++){
		printf("Roll no. : %d\n",s[i].rollno);
		printf("Name : %s\n",s[i].name);
		printf("Strem : %s\n",s[i].class);
		printf("Marks : %d\n",s[i].marks);
		printf("Backlock : %d\n",s[i].backlock);
	}

}
