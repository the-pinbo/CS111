// Lab 3.1 Questin 1
// Inbasekaran.P 201EC226
/*To determine whether a character entered is in lowercase, uppercase, digit or a
special character.*/
// For printf() and scanf()
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include <stdlib.h>

int main()
{
    // To clear the console.
    system("clear");

    printf("Enter the character: ");
    char ch;
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("The character is lower case letter.\n");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("The character is upper case letter.\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("The character is a digit.\n");
    }
    else
    {
        printf("The character is a special character.\n");
    }
    system("pause");
    return 0;
}