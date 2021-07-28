// Lab 5 Questin 5
// Inbasekaran.P 201EC226
/*Write a program to display the greatest of N numbers –use malloc() function*/

// For printf() and scanf()
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include <stdlib.h>
#include<limits.h>

int main()
{
    // To clear the console.
    system("clear");
    int n;
    printf("Enter the total number of elements: ");
    scanf("%d", &n);
    int *data = (int *)malloc(n * sizeof(int));
    if (data == NULL)
    {
        printf("Error!!! memory not allocated.");
        exit(0);
    }
    for (int i = 0; i < n; ++i)
    {
        printf("Enter number%d: ", i + 1);
        scanf("%d", (data + i));
    }
    int max = INT_MIN;
    for (int i = 1; i < n; ++i)
    {
        if (max < *(data + i))
        {
            max = *(data + i);
        }
    }
    printf("Largest number is= %d", max);
    free(data);
    return 0;
}