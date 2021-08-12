// Lab 2 Questin 6
// Inbasekaran.P 201EC226
/*6. Program to find distance between two points (x1, y1) 
and (x2, y2) in a Cartesian plane.*/
// For printf() and scnaf()
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include <stdlib.h>
// for pow() and sqrt()
#include <math.h>

int main()
{
    // To clear the console.
    system("clear");
    // Declaring variables
    double x1, x2, y1, y2;
    double dis;
    //Input
    printf("Enter the cordinates x1 and y1:\n");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the cordinates x2 and y2:\n");
    scanf("%lf %lf", &x2, &y2);
    //Distance formulae
    dis = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    //Output
    printf("Distance between two points (x1, y1) and (x2, y2) is: %lf \n", dis);
    system("pause");
    return 0;
}