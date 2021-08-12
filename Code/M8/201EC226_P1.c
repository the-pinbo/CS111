// Lab 8 Questin 1
// Inbasekaran.P 201EC226
/*
Program to read data from the keyboard; write it in a file called DATA.txt. 
Again read the same data from the file and display it on the screen.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
// Size of the string
#define SIZE 100

void inputStr(char *string)
{
    printf("Enter the string: ");
    fflush(stdin);
    gets(string);
    fflush(stdin);
}

bool write(char *string, char *fileName)
{
    FILE *filePointer = fopen(fileName, "w");
    if (filePointer == NULL)
    {
        printf("%s file failed to open.", fileName);
        return false;
    }
    else
    {
        printf("File opened Successfully.\n");
        if (strlen(string) > 0)
        {
            fputs(string, filePointer);
            fputs("\n", filePointer);
        }
        fclose(filePointer);
        printf("Data successfully written in file %s\n", fileName);
        printf("The file is now closed.\n");
        printf("%43s\n", "***");
    }
    return true;
}

bool read(char *fileName)
{
    FILE *filePointer = fopen(fileName, "r");
    if (filePointer == NULL)
    {
        printf("%s file failed to open.", fileName);
        return false;
    }
    else
    {
        char string[SIZE] = {'\0'};
        while (fgets(string, 100, filePointer))
        {
            printf("%s", string);
        }
        fclose(filePointer);
        printf("Data successfully read from %s\n", fileName);
        printf("The file is now closed.\n");
        printf("%43s\n", "***");
    }
    return true;
}

int main()
{
    // To clear the console.
    system("clear");
    char string[SIZE] = {'\0'};
    // input the string
    inputStr(string);
    write(string, "Data.txt");
    read("Data.txt");
    return 0;
}