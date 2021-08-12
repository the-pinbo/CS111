// Lab 5.2 Questin 3
// Inbasekaran.P 201EC226
/*To search for a number using binary search method*/

// For printf() and scanf()
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include <stdlib.h>
#define MAX 100

int binary_search(int arr[], int low, int high, int key)
{
    if (low > high)
        return -1;
    int mid = (high + low) / 2;
    if (arr[mid] == key)
        return mid;
    if (arr[mid] > key)
        return binary_search(arr, low, high - 1, key);
    if (arr[mid] < key)
        return binary_search(arr, mid + 1, high, key);
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
    printf("Enter the element to be searched in the array in a sorted order.\n");
    int key;
    scanf("%d", &key);
    int y = binary_search(arr, 0, n - 1, key);
    if (y == -1)
        printf("Elenent not found !!! \n");
    else
        printf("The element found at index: %d\n", y);
    system("pause");
    return 0;
}