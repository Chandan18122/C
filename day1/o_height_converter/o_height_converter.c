/*(0)Height Converter: Take height from user in feet and convert height in meter,cm,inches;
*/
#include <stdio.h>

int main()
{
    float feet,meter,cm,inches;
    printf("Enter the height (in feet) : ");
    scanf("%f",&feet);
    meter =  feet * .3048;
    cm = meter * 100;
    inches = feet * 12;
    printf("Height = %.2f m\n",meter);
    printf("Height = %.2f cm\n",cm);
    printf("Height = %.2f in\n",inches);
    return 0;
}
