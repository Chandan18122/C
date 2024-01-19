/*(e) The length & breadth of a rectangle and radius of a circle are input through the keyboard.
Write a program to calculate the area & perimeter of the rectangle,
and the area & circumference of the circle.
C = 2 × π × r A=πr2*/

#include <stdio.h>

void main()
{
    float length,breadth,radius;
    printf("Enter the length and breadth of rectangle(in same unit) : ");
    scanf("%f%f",&length,&breadth);
    printf("\nArea of the rectangle : %.2f",length*breadth);
    printf("\nPerimeter of the rectangle :%.2f\n",2*(length+breadth));
    printf("\nEnter the radius of circle : ");
    scanf("%f",&radius);
    printf("\nArea of the circle : %.2f",(22/7)*radius*radius);
    printf("\nCircumference of the circle : %.2f",2 * (22/7) *radius);
   
}
