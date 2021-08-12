// Lab 1 Questin 2
// Inbasekaran.P 201EC226

// Write a program to read a character and print its decimal, octal and hexadecimal equivalent.

// Including standard input and output for printing the variables.
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include <stdlib.h>

int main()
{
    // To clear the console.
    system("clear");

    // Input for the characher
    printf("Enter the charater: ");
    char ch;
    scanf("%c", &ch);

    // Using %d to print in decimal.
    printf("The value of the character entered in decimal is %d\n", ch);
    // Using %o to print in octal.
    printf("The value of the character entered in octal is %o\n", ch);
    // Using %x to print in hexadecimal.
    printf("The value of the character entered in hexadecimal is %x\n", ch);
    system("pause");
    return 0;
}