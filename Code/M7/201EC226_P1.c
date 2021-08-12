// Lab 7 Questin 1
// Inbasekaran.P 201EC226
/*Program to count frequency of every character present in a line of text*/

// For printf() and scanf()
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include <stdlib.h>
#include <string.h>
// Size of the string
#define SIZE 100
#define COUNT_SIZE 128

int *countChar(char *string)
{
    int *count = (int *)malloc((COUNT_SIZE) * sizeof(int));
    if (count == NULL)
    {
        printf("Error!!! memory not allocated.");
        exit(EXIT_FAILURE);
    }
    memset(count, 0, COUNT_SIZE * sizeof(int));
    while (*string)
    {
        count[*string]++;
        string++;
    }
    return count;
}

void displayCount(int *count)
{
    printf("Char : Count\n");
    for (size_t i = 0; i < COUNT_SIZE; i++)
    {
        if (*(count + i))
            printf("%c : %d\n", i, *(count + i));
    }
}

void inputStr(char *string)
{
    printf("Enter the string: ");
    fflush(stdin);
    gets(string);
    fflush(stdin);
}

int main()
{
    // To clear the console.
    system("clear");
    char string[SIZE] = {'\0'};
    // input the string
    inputStr(string);
    int *count = countChar(string);
    displayCount(count);
    free(count);
    system("pause");
    return 0;
}