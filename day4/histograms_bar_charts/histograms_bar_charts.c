/*One interesting application of computers is drawing graphs and bar charts (sometimes
also called as 'histograms'). Write a program that reads a line of five space separated 
numbers.For each number, your program should print a line containing that number of 
asterisks (*)
*/
#include <stdio.h>

int main()
{
    int arr[5];
    printf("Enter the line of five space separated numbers :");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<arr[i];j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


