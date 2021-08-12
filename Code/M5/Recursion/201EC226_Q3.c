// Lab 5.1 Questin 3
// Inbasekaran.P 201EC226
/*Program to evaluate the equation y=x^1+ x^2+ x^3+………+x^n*/

// For printf() and scanf()
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include <stdlib.h>

long long eval(int x, int n)
{
    long long y = x;
    long long xi = x;
    while (--n > 0)
    {
        xi *= x;
        y += xi;
    }
    return y;
}

int main()
{
    // To clear the console.
    system("clear");
    // input
    printf("Enter the value of x and n (n>0): ");
    int x, n;
    scanf("%d %d", &x, &n);
    long long y = eval(x, n);
    printf("The value of y is : %lld\n", y);
    system("pause");
    return 0;
}