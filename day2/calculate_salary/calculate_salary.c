/*• Write a program to calculate the salary as per the following table
Department :- Years of Service : Qualifications : Salary
IT :- >= 10 Post-Graduate 150000, >= 10 Graduate 100000
    < 10 Post-Graduate 100000, < 10 Graduate 70000
Account :- >= 10 Post-Graduate 120000, >= 10 Graduate 90000
    < 10 Post-Graduate 100000, < 10 Graduate 60000
HR :- >= 10 Post-Graduate 100000, >= 10 Graduate 80000
    < 10 Post-Graduate 900000, < 10 Graduate 50000
*/
#include <stdio.h>

int main()
{
    int s, qf;
    long int salary;
    char de;
    printf("Enter your department : i for it, a for account and h for HR : ");
    scanf("%c",&de);
    printf("Enter your Qualifications : 1 for post-Graduate and 2 for Graduate : ");
    scanf("%d",&qf);
    printf("Enter your years of service : ");
    scanf("%d",&s);
    if((de == 'i'|| de == 'I'||de == 'a'||de == 'A'||de == 'h'||de == 'H')&& (qf == 1|| qf == 2)){
        //for IT
        if((de=='i'|| de == 'I') && s>=10 && qf == 1){
            salary = 150000;
        }
        if((de == 'i'|| de == 'I') && s>=10&& qf == 2){
            salary = 100000;
        }
        if((de == 'i'|| de == 'I') && s<10&& qf == 1){
            salary = 100000;
        }
        if((de == 'i'|| de == 'I') && s<10&& qf == 2){
            salary = 70000;
        }
        //for account
        if((de == 'a'||de == 'A') && s>=10 && qf == 1){
            salary = 120000;
        }
        if((de == 'a'||de == 'A') && s>=10&& qf == 2){
            salary = 90000;
        }
        if((de == 'a'||de == 'A') && s<10&& qf == 1){
            salary = 100000;
        }
        if((de == 'a'||de == 'A') && s<10&& qf == 2){
            salary = 60000;
        }
        //for HR
        if((de == 'h'||de == 'H') && s>=10 && qf == 1){
            salary = 100000;
        }
        if((de == 'h'||de == 'H') && s>=10&& qf == 2){
            salary = 80000;
        }
        if((de == 'h'||de == 'H') && s<10&& qf == 1){
            salary = 900000;
        }
        if((de == 'h'||de == 'H') && s<10&& qf == 2){
            salary = 50000;
        } 
        printf("your salary : %ld",salary);
    }
    else{
        printf("Enter data is incorrect.");
    }
    return 0;
}


