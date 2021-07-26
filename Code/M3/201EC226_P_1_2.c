// Lab 3.1 Questin 2
// Inbasekaran.P 201EC226
/*Find the roots of quadratic equation*/

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
    double a, b, c;
    printf("Enter coefficients of the quadratic equation a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    double D = b * b - 4 * a * c;
    double alpha, beta, x, iy;

    // real and unique roots 
    if (D > 0) 
    {
        alpha = (-b + sqrt(D)) / (2 * a);
        beta = (-b - sqrt(D)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", alpha, beta);
    }

    // real and equal roots
    else if (D == 0) 
    {
        alpha = beta = -b / (2 * a);
        printf("root1 = root2 = %.2lf", alpha);
    }

    // complex roots 
    else 
    {
        x = -b / (2 * a);
        iy = sqrt(-D) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", x, iy, x, iy);
    }
    
    return 0;
}