// Lab 3.2 Questin 6
// Inbasekaran.P 201EC226
/* Program to evaluate 1+x+x^2/2!+x^3/3!+....*/
// For printf() and scanf()
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include <stdlib.h>
// for pow() and sqrt()
#include <math.h>

int main()
{
    // To clear the console.
    system("clear");
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    float x;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    float num = 1;
    float den = 1;
    double sum = 1;
    for(int i = 1; i < n; i++)
    {
        num *= x;
        den *= i;
        sum += num/den;
    }
    printf("The sum of teh series %lf.", sum);
    return 0;
}