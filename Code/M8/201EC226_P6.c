// Lab 8 Questin 5
// Inbasekaran.P 201EC226
/*
Program to find the number of lines in a text file
*/

#include <stdio.h>
#include <stdlib.h>

long long lines(char *fileName)
{
    FILE *filePointer = fopen(fileName, "r");
    if (filePointer == NULL)
    {
        printf("%s file failed to open.\n", fileName);
        exit(1);
    }
    int c;
    long long count = 0;
    while ((c = fgetc(filePointer)) != EOF)
    {
        if (c == '\n')
            count++;
    }
    fclose(filePointer);
    printf("\nData successfully read from %s\n", fileName);
    printf("The file is now closed.\n");
    printf("%43s\n", "***");
    return count + 1;
}

int main()
{
    // To clear the console.
    system("clear");
    printf("The number of lines in the file is %d.\n", lines("DATA2.txt"));
    return 0;
}