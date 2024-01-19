//(p)Convert Days to month, week,year 
	
#include <stdio.h>
int main() {
	    int day, month, week, year;
	    int lday;
	    printf("Enter days : ");
	    scanf("%d",&day);
	    year = day/365;
	    day = day%365;
	    month = day/30;
	    day =day%30;
	    week = day/7;
	    day = day%7;
	    printf("%d Year %d Month %d Week %d days",year,month,week, day);
	    return 0;
}
