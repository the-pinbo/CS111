
// Lab 2 Questin 3
// Inbasekaran.P 201EC226 

/*
Write a C program to read an integer and do the following operations without using arithmetic operations:
a) Divide the number by 8 and print the result
b) Multiply the number by 8 and print the result.
*/

// Including standard input and output for printing the variables.
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include<stdlib.h>


int main()
{
    // To clear the console.
    system("clear");
    
    int n;
    // Input
    scanf("%d",&n);
    
    // Divide by 8
    printf("%d\n", n>>3);

    // Multiply by 8
    printf("%d\n", n<<3);
    
    return 0;
}