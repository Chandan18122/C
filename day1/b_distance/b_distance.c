/*(b) The distance between two cities (in km.) is input through the keyboard.
Write a program to convert and print this distance in meters, feet, inches and centimeters.
1km = 39370.1in
1km = 1000m
1km = 3280.84ft
1km = 100000cm 
*/

#include <stdio.h>
void main(){
    float km,inches,meters,feet, centimeters;
    printf("Enter the diatance between two cities (in KM) : ");
    scanf("%f",&km);
    inches= km * 39370.1;
    meters= km * 1000;
    feet = km * 3280.84;
    centimeters= km * 100000;
    printf("\n%.2f KM = %.2f m",km, meters);
    printf("\n%.2f KM = %.2f in",km, inches);
    printf("\n%.2f KM = %.2f ft",km, feet);
    printf("\n%.2f KM = %.2f cm",km, centimeters);
}


