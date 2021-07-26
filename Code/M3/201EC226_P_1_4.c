// Lab 3.1 Questin 4
// Inbasekaran.P 201EC226 
/*Write a menu driven program to demonstrate the simple arithmetic calculator*/

// Including standard input and output for printing the variables.
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include<stdlib.h>

int main()
{
// To clear the console.
    system("clear");

    char operator;
    printf("Enter an operator\n+\t-\t*\t/\n:");
    scanf("%c", &operator);        
        
    double num1, num2;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);    

    switch (operator) 
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf", num1, num2, num1 * num2);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf", num1, num2, num1 / num2);
            break;
            // operator doesn't match any case constant
        default:
            printf("Sorry, Enter a valid operator");
    }

    return 0;
}