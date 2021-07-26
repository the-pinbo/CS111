// Lab 7 Questin 2
// Inbasekaran.P 201EC226
/*Program to swap two numbers*/

// For printf() and scanf()
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int input()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    return n;
}

void dispaly(int a)
{
    printf("The number is: %d\n", a);
}

int main()
{
    // To clear the console.
    system("clear");
    int a = input();
    int b = input();
    dispaly(a);
    dispaly(b);
    swap(&a, &b);
    dispaly(a);
    dispaly(b);
    return 0;
}