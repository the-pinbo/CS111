// Lab 3.2 Questin 2
// Inbasekaran.P 201EC226 
/* Program to find factors of a given number */
// Including standard input and output for printing the variables.
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include<stdlib.h>


int main()
{
    // To clear the console.
    system("clear");
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    for (int i = 1; i <= num; ++i) 
    {
        if (num % i == 0) 
        {
            printf("%d ", i);
        }
    }
    return 0;
}