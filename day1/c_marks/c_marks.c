/*(c) If the marks obtained by a student in five different subjects are input through the keyboard,
find out the aggregate marks and percentage marks obtained by the student.
Assume that the maximum marks that can be obtained by a student in each subject is 100.
*/
#include <stdio.h>

void main()
{
    float sm1,sm2,sm3,sm4,sm5, total, per;
    printf("Enter the marks obtained by a student in five different subjects : ");
    scanf("%f%f%f%f%f",&sm1,&sm2,&sm3,&sm4,&sm5);
    total = sm1+sm2+sm3+sm4+sm5;
    per= (total/500)*100;
    printf("\nTotal marks : %.2f \nPercentage : %.2f",total, per);
    
}
