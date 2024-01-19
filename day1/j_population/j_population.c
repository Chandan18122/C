/* (j) In a town, the percentage of men is 52. The percentage of total literacy is 48.
If total percentage of literate men is 35 of the total population,
write a program to find the total number of illiterate men and women
if the population of the town is 80,000.
*/
#include <stdio.h>

int main()
{
    int men = 80000 * .52,women = 80000 - men;
    int literacy = 80000 * .48;
    int lmen = literacy * .35;
    int lwomen = literacy - lmen;
    printf("Total no. of illiterate = %d\n men = %d\n women = %d",literacy,lmen,lwomen);
    
    return 0;
}
