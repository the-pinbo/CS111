// Lab 8 Questin 4
// Inbasekaran.P 201EC226
/*
Copy the content of one file into another
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
// Size of the string
#define SIZE 100

bool append(char *fileNameSrc, char *fileNameDest)
{
    FILE *filePointerRead = fopen(fileNameSrc, "r");
    FILE *filePointerWrite = fopen(fileNameDest, "r+");
    if (filePointerRead == NULL || filePointerWrite == NULL)
    {
        printf("File failed to open.\n");
        return false;
    }
    else
    {
        printf("File opened Successfully.\n");
        char ch = 0;
        printf("File opened Successfully.\n");
        while ((ch = fgetc(filePointerWrite)) != EOF)
            ;
        char string[SIZE] = {'\0'};
        while (fgets(string, 100, filePointerRead))
        {
            fputs(string, filePointerWrite);
        }
        if (fclose(filePointerRead) == EOF || fclose(filePointerWrite))
        {
            printf("Error while closing the file ");
            return false;
        }
        printf("\nData successfully written in file %s\n", fileNameDest);
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
        printf("%s file failed to open.\n", fileName);
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
        printf("\nData successfully read from %s\n", fileName);
        printf("The file is now closed.\n");
        printf("%43s\n", "***");
    }
    return true;
}

int main()
{
    // To clear the console.
    system("clear");
    append("Data.txt", "DATA2.txt");
    system("pause");
    return 0;
}