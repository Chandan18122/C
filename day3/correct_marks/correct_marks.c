#include <stdio.h>
//currect the marks
int main()
{
    int tq,wc,winc,cans;
    printf("Enter the total number of question : ");
    scanf("%d",&tq);
    printf("Enter the marks for each correct answer : ");
    scanf("%d",&wc);
    printf("Enter the marks for each incorrect answer : ");
    scanf("%d",&winc);
    printf("Enter the total number of correct answer :");
    scanf("%d",&cans);
    float marks, pre;
    marks = (cans * wc) - ((tq - cans) *winc);
    printf("\nTotal marks : %.2f",marks);
    pre = (marks/(tq *wc)) * 100;
    printf("\nPrecentages : %.2f",pre);
    if(pre>=50){
        printf("\nPass");
    }
    else{
        printf("\nFail");
    }

    return 0;
}

