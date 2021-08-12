// Lab 4.2 Questin 2
// Inbasekaran.P 201EC226
/*To reverse a string and check whether the string is palindrome or not*/

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
    // Input the string
    printf("Enter the string: ");
    scanf("%[^\n]s", string);
    int i = 0;
    while (string[i++])
        ;
    i--;
    char rev_string[SIZE] = {'\0'};
    for (int j = 0; j < i; ++j)
        rev_string[j] = string[i - j - 1];

    printf("The string  entered is %s\n", string);
    printf("The reversed string is %s\n", rev_string);

    for (int j = 0; j < i; ++j)
    {
        if (rev_string[j] != string[j])
        {
            printf("The string is NOT a palindrome.\n");
            return 0;
        }
    }

    printf("The strings is a palindrome.\n");
    system("pause");
    return 0;
}