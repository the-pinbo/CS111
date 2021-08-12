// Lab 4.1 Questin 2
// Inbasekaran.P 201EC226
/*Program to count the number of palindromes in a given list of n numbers*/

// For printf() and scanf()
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include <stdlib.h>

int main()
{
    // To clear the console.
    system("clear");
    int arr[100], size;
    int count = 0;

    printf("Number of elements: ");
    scanf("%d", &size);

    printf("Enter elements: ");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < size; i++)
    {
        int rev = 0;
        int num = arr[i];

        while (num)
        {
            int last = num % 10;
            rev = 10 * rev + last;
            num /= 10;
        }
        if (rev == arr[i])
            count++;
    }
    printf("Number of palindromes in the list: %d", count);
    system("pause");
    return 0;
}