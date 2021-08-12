// Lab 2 Questin 1
// Inbasekaran.P 201EC226
/*To find Simple and Compound Interest*/
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
    double p;
    // Input principal,time and rate of interest.
    printf("Please enter Principal:\n");
    scanf("%lf", &p);
    double t;
    printf("Please enter Time in year:\n");
    scanf("%lf", &t);
    double r;
    printf("Please enter Rate of Interest in percent:\n");
    scanf("%lf", &r);
    // simple intrest calculation.
    double si = (p * t * r) / 100;
    // Print the simple intrest
    printf("Simple interest = %lf\n", si);
    // Compound intrest calculation.
    double amount = p * pow((1 + r / 100), t);
    double ci = amount - p;
    // Print compound intrest
    printf("Compound interest = %lf\n", ci);
    system("pause");
    return 0;
}