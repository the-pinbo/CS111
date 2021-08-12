// Lab 2 Questin 2
// Inbasekaran.P 201EC226
/* The length & breadth of a rectangle and radius of a circle are input through
the keyboard.Write a program to calculate the area & perimeter of the rectangle,
and the area & circumference of the circle.*/
// Including standard input and output for printing the variables.
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include <stdlib.h>

int main()
{
    // To clear the console.
    system("clear");
    //  Rectangle
    //  Input
    const float PI = 3.1415;
    float l, b;
    printf("Rectangle\n");
    printf("Enter length: ");
    scanf("%f", &l);
    printf("Enter breadth: ");
    scanf("%f", &b);
    // area of rectangle = l*b
    printf("Area of rectangle: %f\n", l * b);
    // perimeter = 2*(l+b)
    printf("Perimeter of rectangle: %f\n\n", 2 * (l + b));
    //  Circle
    //  Input
    float r;
    printf("Circle\n");
    printf("Enter radius: ");
    scanf("%f", &r);
    // Area = PI*r*r
    printf("Area of circle: %f\n", PI * r * r);
    // Circumference of circle = 2*PI*r
    printf("Circumference of circle: %f\n", 2 * PI * r);
    system("pause");
    return 0;
}
