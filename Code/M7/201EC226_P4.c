// Lab 6 Questin 4
// Inbasekaran.P 201EC226
/*
Write functions for the following string operations.
a) Concatenation. b) Comparison. c) Length d) Copy e) Reverse.
*/
// For printf() and scanf()
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include <stdlib.h>
#include <string.h>
// Size of the string
#define SIZE 100

int length(char *string);
char *concatenate(char *string1, char *string2);
int comparison(char *string1, char *string2);
char *copy(char *string);
char *reverse(char *string);
void swap(char *a, char *b);
void switch_case(int choice);
int menu();
void inputStr(char *string);
void display(char *string);

int main()
{
    // To clear the console.
    system("clear");
    switch_case(menu());
    return 0;
}

int menu()
{
    printf("Enter Your choice\n");
    printf("1. Concatenation\n");
    printf("2. Comparison\n");
    printf("3. Length\n");
    printf("4. Copy\n");
    printf("5. Reverse\n");
    int choice;
    scanf("%d", &choice);
    return choice;
}

void display(char *string)
{
    int i = 0;
    while (string[i])
    {
        printf("%c", string[i++]);
    }
    printf("\n");
}

void inputStr(char *string)
{
    printf("Enter the string: ");
    fflush(stdin);
    gets(string);
    fflush(stdin);
}

void switch_case(int choice)
{
    switch (choice)
    {
    case 1:
    {
        char string1[SIZE] = {'\0'};
        // input the string
        inputStr(string1);
        char string2[SIZE] = {'\0'};
        // input the string
        inputStr(string2);
        char *strCat = concatenate(string1, string2);
        display(strCat);
        break;
    }
    case 2:
    {
        char string1[SIZE] = {'\0'};
        // input the string
        inputStr(string1);
        char string2[SIZE] = {'\0'};
        // input the string
        inputStr(string2);
        int n = comparison(string1, string2);
        if (n == 0)
            printf("Same Strings\n");
        else
            printf("Different Strings\n");
        break;
    }
    case 3:
    {
        char string1[SIZE] = {'\0'};
        // input the string
        inputStr(string1);
        int len = length(string1);
        printf("The length of the string is %d", len);
        break;
    }
    case 4:
    {
        char string1[SIZE] = {'\0'};
        // input the string
        inputStr(string1);
        char *string2 = copy(string1);
        printf("The new copy of the string:");
        display(string2);
        break;
    }

    case 5:
    {
        char string1[SIZE] = {'\0'};
        // input the string
        inputStr(string1);
        char *string2 = reverse(string1);
        printf("The reverse of the string:");
        display(string2);
        break;
    }
    default:
        printf("wrong Input\n");
    }
}

int length(char *string)
{
    int n = 0;
    while (string[++n])
        ;
    return n;
}

char *concatenate(char *string1, char *string2)
{
    int n1 = length(string1);
    int n2 = length(string2);
    int n = n1 + n1;
    char *string = (char *)malloc(n * sizeof(char) + 1);
    if (string == NULL)
    {
        printf("Error!!! memory not allocated.");
        exit(0);
    }
    memset(string, 0, n * sizeof(char) + 1);
    int i = 0;
    for (; i < n1; ++i)
    {
        string[i] = string1[i];
    }
    for (int j = 0; j < n2; ++i, ++j)
    {
        string[i] = string2[j];
    }
    return string;
}

int comparison(char *string1, char *string2)
{
    for (int i = 0; string1[i] && string2[i]; ++i)
    {
        if (string1[i] > string2[i])
            return 1;
        else if (string1[i] < string2[i])
            return -1;
    }
    return 0;
}

char *copy(char *string)
{
    int n = length(string);
    char *stringC = (char *)malloc(n * sizeof(char) + 1);
    if (string == NULL)
    {
        printf("Error!!! memory not allocated.");
        exit(0);
    }
    memset(stringC, 0, n * sizeof(char) + 1);
    for (size_t i = 0; i < n; i++)
    {
        stringC[i] = string[i];
    }
    return stringC;
}

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
    return;
}

char *reverse(char *string)
{
    int i = 0;
    int j = length(string) - 1;
    while (j > i)
    {
        swap(&string[i++], &string[j--]);
    }
    system("pause");
    return string;
}