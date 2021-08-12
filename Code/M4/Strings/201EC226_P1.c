// Lab 4.2 Questin 1
// Inbasekaran.P 201EC226
/*To read a string and find its length without using a library function*/

// For printf() and scanf()
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include <stdlib.h>
// Size of the string
#define SIZE 100

int main()
{
    // To clear the console.
    system("clear");
    char string[SIZE] = {'\0'};
    // input the string
    printf("Enter the string: ");
    scanf("%[^\n]s", string);
    int i = 0;
    while (string[i++])
        ;
    printf("The length of the string is %d\n", --i);
    system("pause");
    return 0;
}