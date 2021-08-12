// Lab 4.1 Questin 1
// Inbasekaran.P 201EC226
/*To read an array of N elements and reverse it.*/

// For printf() and scanf()
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include <stdlib.h>

int main()
{
    // To clear the console.
    system("clear");
    printf("Number of elements: ");
    int size = 10;
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int rev_arr[size];
    for (int i = 0; i < size; i++)
    {
        rev_arr[i] = arr[size - i - 1];
    }
    printf("Printing the elements of the reversed array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", rev_arr[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}