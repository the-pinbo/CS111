// Lab 1 Questin 3
// Inbasekaran.P 201EC226
// Write a program to find the third angle of a triange when two angles are given.

// Including standard input and output for printing the variables.
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include <stdlib.h>

int main()
{
    // To clear the console.
    system("clear");

    // Angle sum property of triangle A+B+C = 180
    float sum = 180;
    // Declaring thee angles variable for the triangle.
    float A, B, C;
    // Input two angles.
    printf("Enter the two angles of the triangle: ");
    scanf("%f %f", &A, &B);
    // Calculate third angle.
    C = sum - A - B;
    // Print thrid angle.
    printf("The thrird angle of the triangle is %f.", C);
    system("pause");
    return 0;
}