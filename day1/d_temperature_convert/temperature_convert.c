/*(d) Temperature of a city in Fahrenheit degrees is input through the keyboard. 
Write a program to convert this temperature into Centigrade degrees.
°C = (°F - 32) × 5/9 
°F = °C × (9/5) + 32 */

#include <stdio.h>

void main()
{
    float centigrade,fahren;
    printf("Enter the temperature of city(in Fahrenheit) : ");
    scanf("%f",&fahren);
    centigrade = (fahren - 32)* 5/9;
    printf("temperature of city in centigrade : %.2f C",centigrade);
}
