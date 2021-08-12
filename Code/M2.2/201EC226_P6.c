// Lab 2 Questin 6
// Inbasekaran.P 201EC226
/* Write a program to compute the values of square-roots
 and squares of the numbers 0 to 100 in steps 10*/

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
    // print square-root and squares
    int i = 0;
    printf("The square-root of %3d is %7.4lf\n", i, sqrt(i));
    printf("The square of %3d is %5d\n", i, (int)pow(i, 2));
    i += 10;
    printf("The square-root of %3d is %7.4lf\n", i, sqrt(i));
    printf("The square of %3d is %5d\n", i, (int)pow(i, 2));
    i += 10;
    printf("The square-root of %3d is %7.4lf\n", i, sqrt(i));
    printf("The square of %3d is %5d\n", i, (int)pow(i, 2));
    i += 10;
    printf("The square-root of %3d is %7.4lf\n", i, sqrt(i));
    printf("The square of %3d is %5d\n", i, (int)pow(i, 2));
    i += 10;
    printf("The square-root of %3d is %7.4lf\n", i, sqrt(i));
    printf("The square of %3d is %5d\n", i, (int)pow(i, 2));
    i += 10;
    printf("The square-root of %3d is %7.4lf\n", i, sqrt(i));
    printf("The square of %3d is %5d\n", i, (int)pow(i, 2));
    i += 10;
    printf("The square-root of %3d is %7.4lf\n", i, sqrt(i));
    printf("The square of %3d is %5d\n", i, (int)pow(i, 2));
    i += 10;
    printf("The square-root of %3d is %7.4lf\n", i, sqrt(i));
    printf("The square of %3d is %5d\n", i, (int)pow(i, 2));
    i += 10;
    printf("The square-root of %3d is %7.4lf\n", i, sqrt(i));
    printf("The square of %3d is %5d\n", i, (int)pow(i, 2));
    i += 10;
    printf("The square-root of %3d is %7.4lf\n", i, sqrt(i));
    printf("The square of %3d is %5d\n", i, (int)pow(i, 2));
    i += 10;
    printf("The square-root of %3d is %7.4lf\n", i, sqrt(i));
    printf("The square of %3d is %5d\n", i, (int)pow(i, 2));
    i += 10;
    system("pause");
    return 0;
}
