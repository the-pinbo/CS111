// Lab 8 Questin 2
// Inbasekaran.P 201EC226
/*
A file named DATA.txt contains a series of integer numbers. Write a program to read
these numbers and then write all odd numbers to a file to be called ODD and all even
numbers to a file to be called EVEN.

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
        int number;
        while (fscanf(filePointer, "%d", &number) != EOF)
            printf("%4d", number);
        fclose(filePointer);
        printf("\n\nData successfully read from %s\n", fileName);
        printf("The file is now closed.\n");
        printf("%43s\n", "***");
    }
    return true;
}

bool sortData(char *fileName, char *fileNameEven, char *fileNameOdd)
{
    FILE *filePointer = fopen(fileName, "r");
    FILE *filePointerEven = fopen(fileNameEven, "w");
    FILE *filePointerOdd = fopen(fileNameOdd, "w");
    if (filePointer == NULL || filePointerEven == NULL || filePointerOdd == NULL)
    {
        printf("File failed to open.");
        return false;
    }
    else
    {
        int number;
        while ((number = getw(filePointer)) != EOF)
        {
            if (number % 2 == 0)
                putw(number, filePointerEven);
            else
                putw(number, filePointerOdd);
        }

        fclose(filePointer);
        fclose(filePointerEven);
        fclose(filePointerOdd);
        printf("\n\nData successfully read from %s and sorted\n", fileName);
        printf("The file is now closed.\n");
        printf("%43s\n", "***");
    }
    return true;
}

int main()
{
    // To clear the console.
    system("clear");
    printf("Contents of DATA file\n\n");
    read("Data.txt");
    sortData("Data.txt", "EVEN.txt", "ODD.txt");
    printf("\n\nContents of ODD file\n\n");
    read("ODD.txt");
    printf("\n\nContents of EVEN file\n\n");
    read("EVEN.txt");
    system("pause");
    return 0;
}