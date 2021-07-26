
// Lab 2 Questin 2
// Inbasekaran.P 201EC226 
/*To read the radius of a circle and find its Area and Perimeter.*/
// Including standard input and output for printing the variables.
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include<stdlib.h>
int main()
{
    // To clear the console.
    system("clear");
    // Making Pi as a constant 
    const float PI = 3.1415;
    float r;
    // Input
    printf("Enter the radius: \n");
    scanf("%f",&r);
    // Area of circle 
    float area = PI*r*r;
    // Perimeter of circle 
    float perimeter = 2*PI*r;
    // Print area. 
    printf("%f\n", area);
    // Print perimeter. 
    printf("%f\n", perimeter);
    return 0;
}