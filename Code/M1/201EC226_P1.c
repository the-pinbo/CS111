// Lab 1 Questin 1 
// Inbasekaran.P 201EC226 

// Write a program to swap two numbers without using a third variable. 

// Including standard input and output for printing the variables.
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include<stdlib.h>

int main() 
{
    // To clear the console.
    system("clear");
    // Input the two numbers.
    printf("Enter the two numbers to be swapped:\n");
    printf("Input: ");
    int a = 0;
    int b = 0;
    scanf("%d", &a);
    scanf("%d", &b);

    // Printing the two numbers. 
    printf("The value of a = %d b = %d before swapping.\n", a, b);

    // Swapping the two numbers using bit wise ^ XOR operator. 
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    // Printing the two numbers after swapping  
    printf("The value of a = %d b = %d after swapping\n", a, b);

    return 0;
}