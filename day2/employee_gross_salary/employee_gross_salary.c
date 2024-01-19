/* In a company an employee is paid as under:
If his basic salary is less than Rs. 1500, then HRA = 10% of basic salary and DA = 90% of 
basic salary. If his salary is either equal to or above Rs. 1500, then HRA = Rs. 500 and DA 
= 98% of basic salary. If the employee's salary is input through the keyboard write a 
program to find his gross salary.
*/
#include <stdio.h>

int main()
{
    int bsalary;
    float hra, da,gross_salary;
    printf("Enter the basic salary of employee : ");
    scanf("%d",&bsalary);
    if(bsalary < 1500){
        hra = bsalary * .1;
        da = bsalary * .9;
    }
    else{
        hra = 500;
        da = bsalary * .98;
    }
    gross_salary = bsalary+hra+da;
    printf("HRA : %.2f\n",hra);
    printf("DA : %.2f\n",da);
    printf("Gross salary : %.2f",gross_salary);
    return 0;
}


