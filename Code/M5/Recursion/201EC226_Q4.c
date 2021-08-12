// Lab 5.2 Questin 4
// Inbasekaran.P 201EC226
/*Program to evaluate the equation y=1+1/3!+1/5! + …… +1/N!*/
// For printf() and scanf()
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include <stdlib.h>

double eval(double n)
{
    static double fact = 1;
    static double i = 1;
    if (n == 1)
        return 1;
    double y = eval(n - 1);
    fact *= ++i;
    fact *= ++i;
    return 1 / fact + y;
}

int main()
{
    // To clear the console.
    system("clear");
    // input
    printf("Enter the value of n (n>0): ");
    int n;
    scanf("%d", &n);
    double y = eval(n);
    printf("The value of y is : %lf\n", y);
    system("pause");
    return 0;
}