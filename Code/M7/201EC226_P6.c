// Lab 7 Questin 6
// Inbasekaran.P 201EC226
/*Write a program to arrange N names in alphabetical order using 
dynamic memory allocation*/

// For printf() and scanf()
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include <stdlib.h>
#include <string.h>
// Size of the string
#define SIZE 100

char *inputName()
{
    printf("Enter the number of characters in the name: ");
    int n = 0;
    scanf("%d", &n);
    char *string = (char *)malloc(n * sizeof(char) + 1);
    if (string == NULL)
    {
        printf("Error!!! memory not allocated.");
        exit(0);
    }
    memset(string, 0, n * sizeof(char) + 1);
    fflush(stdin);
    printf("Enter the name: ");
    for (size_t i = 0; i < n; i++)
    {
        scanf("%c", &string[i]);
    }
    fflush(stdin);
    return string;
}

char **nameList()
{
    printf("Enter the number of students: ");
    int n = 0;
    scanf("%d", &n);
    char **list = (char **)malloc(n * sizeof(char *) + 1);
    if (*list == NULL)
    {
        printf("Error!!! memory not allocated.");
        exit(0);
    }
    for (size_t i = 0; i < n; i++)
    {
        list[i] = inputName();
    }
    list[n] = NULL;
    return list;
}

void displayList(char **list)
{
    printf("Name list: \n");
    int i = 0;
    while (list[i])
    {
        printf("%s\n", list[i++]);
    }
}

void swap(char **name1Add, char **name2Add)
{
    char *temp = *name1Add;
    *name1Add = *name2Add;
    *name2Add = temp;
    return;
}

int len(char **list)
{
    int i = 0;
    while (list[i])
    {
        i++;
    }
    return i;
}
void sortList(char **list)
{
    int n = len(list);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (list[j][0] > list[j + 1][0])
            {
                swap(&list[j], &list[j + 1]);
            }
            else if (list[j][0] == list[j + 1][0])
            {
                int k = 1;
                while (list[j][k] == list[j + 1][k] && (list[j][k] != '\0' && list[j + 1][k] != '\0'))
                {
                    k++;
                }
                if (list[j][k] > list[j + 1][k])
                {
                    swap(&list[j], &list[j + 1]);
                }
            }
        }
    }
}

int main()
{
    char **list = nameList();
    sortList(list);
    displayList(list);
    return 0;
}
