// Lab 7 Questin 3
// Inbasekaran.P 201EC226
/*Program to find area and circumference of a circle*/
// For printf() and scanf()
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include <stdlib.h>
// Size of the string
#define PI 3.141

int input()
{
    int n;
    printf("Enter the radius: ");
    scanf("%d", &n);
    return n;
}

double area(int *radius)
{
    return PI * (*radius) * (*radius);
}

double circumference(int *radius)
{
    return 2 * PI * (*radius);
}

int main()
{
    // To clear the console.
    system("clear");
    int r = input();
    printf("The area is: %lf\n", area(&r));
    printf("The circumference is: %lf\n", circumference(&r));
    system("pause");
    return 0;
}