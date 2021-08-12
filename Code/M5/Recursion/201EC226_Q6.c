// Lab 5.2 Questin 6
// Inbasekaran.P 201EC226
/*Program to find whether an entered year is a leap year or not*/

// For printf() and scanf()
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include <stdlib.h>
// To include bool data type.
#include <stdbool.h>
#define MAX 100
#define max(a, b) (a > b ? a : b)

int max_num(int arr[], int start, int end)
{
    if (start == end)
        return arr[start];
    if (end - start == 1)
        return max(arr[start], arr[end]);
    int n = end - start + 1;
    return max(max_num(arr, start, n / 2 - 1), max_num(arr, n / 2, n - 1));
}

int main()
{
    // To clear the console.
    system("clear");
    printf("Enter the size of the array: ");
    int n;
    scanf("%d", &n);
    int arr[MAX] = {0};
    printf("Enter the elements of the array.\n");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
    int y = max_num(arr, 0, n - 1);
    printf("The maximum element with the maximum value in the array is %d\n", y);
    system("pause");
    return 0;
}