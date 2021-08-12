// Lab 8 Questin 5
// Inbasekaran.P 201EC226
/*
Program to find the size of file using file handling function
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long size(char *fileName)
{
    FILE *filePointer = fopen(fileName, "r");
    if (filePointer == NULL)
    {
        printf("%s file failed to open.\n", fileName);
        exit(1);
    }
    fseek(filePointer, 0, SEEK_END);
    long long len = ftell(filePointer);
    fclose(filePointer);
    printf("\nData successfully read from %s\n", fileName);
    printf("The file is now closed.\n");
    printf("%43s\n", "***");
    return len;
}

int main()
{
    // To clear the console.
    system("clear");
    printf("The size of the file in bytes is %d", size("Data.txt"));
    return 0;
}