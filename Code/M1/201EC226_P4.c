
// Lab 1 Questin 4
// Inbasekaran.P 201EC226
// Write a program to evaluate (a-b)^2 with and without pow().

// Including standard input and output for printing the variables.
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include <stdlib.h>
// Including math.h for pow(x, y) which returns x^y
#include <math.h>

int main()
{
    // To clear the console.
    system("clear");

    // Input a (Variabel 1)
    printf("Enter the value of the first number:");
    double a = 0;
    scanf("%lf", &a);

    // Input b (Variabel 2)
    printf("Enter the value of the second number:");
    double b = 0;
    scanf("%lf", &b);

    // Calculating value of (a-b)
    double var = (a - b);
    // Evaluating using pow()
    printf("The value of (a-b)^2 with pow() is %lf.\n", pow(var, 2));

    // Evaluating without pow()
    printf("The value of (a-b)^2 with out pow() is %lf.\n", var * var);
    system("pause");
    return 0;
}