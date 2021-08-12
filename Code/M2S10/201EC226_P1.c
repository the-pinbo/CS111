
// Lab 2 Questin 1
// Inbasekaran.P 201EC226
// Write a program to calculate the sum of the first and
// the second last digit of a 5 digit number entered
// from the keyboard.

// For printf() and scnaf()
#include <stdio.h>

// Including stdlib for system("clear") to clear the screen in the terminal.
#include <stdlib.h>

int main()
{
    // To clear the console.
    system("clear");

    // Input the number.
    int n;
    scanf("%d", &n);

    // Removing the last digit
    int a = n / 10;
    // Finding the second last digit
    a = a % 10;
    // Removing the 4 last digit
    int b = n / 10000;
    // Finding the Seconfirst last digit
    b = b % 10;
    // Printing the sum in the console.
    printf("Sum of the first and second last number is: %d.\n", a + b);
    system("pause");
    return 0;
}