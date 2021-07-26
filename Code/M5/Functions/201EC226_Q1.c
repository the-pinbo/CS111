// Lab 5 Questin 1
// Inbasekaran.P 201EC226
/*Write a function to generate n Fibonacci numbers*/

// For printf() and scanf()
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include <stdlib.h>

long long fib(int n)
{
    long long n_1 = 1;
    long long n_2 = 0;
    long long fib_n = 0;
    while (n-- > 0)
    {
        fib_n = n_1 + n_2;
        n_2 = n_1;
        n_1 = fib_n;
    }
    return fib_n;
}

int main()
{
    // To clear the console.
    system("clear");
    printf("Enter the value of n: ");
    int n;
    scanf("%d",&n);
    long long y = fib(n);
    printf("The value of fib(n) is : %lld\n", y);
    return 0;
}