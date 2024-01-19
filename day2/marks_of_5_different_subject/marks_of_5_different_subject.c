/*The marks obtained by a student in 5 different subjects are input through the 
keyboard. The student gets a division as per the following rules:
Percentage above or equal to 60 - First division
Percentage between 50 and 59 - Second division
Percentage between 40 and 49 - Third division
Percentage less than 40 - Fail
Write a program to calculate the division obtained by the student.
*/
#include <stdio.h>

int main()
{
    int s1,s2,s3,s4,s5,marks;
    printf("Enter the marks of 5 different subjects : ");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    marks = s1+s2+s3+s4+s5;
    float per = marks/5;
    printf("Total marks : %d\n",marks);
    printf("Percentage : %.2f\n",per);
    if(per >= 60){
        printf("Division : First Division\n");
    }
    else if(50 <= per && per < 60){
        printf("Division : Second Division\n");
    }
    else if(40 <= per && per < 50){
        printf("Division : Third Division\n");
    }
    else{
        printf("Division : Fail\n");
    }

    return 0;
}


