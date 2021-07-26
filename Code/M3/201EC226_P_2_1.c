// Lab 3.2 Questin 1
// Inbasekaran.P 201EC226
/*Program to reverse the digits of a number and to find the sum of the digits*/
// For printf() and scanf()
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include <stdlib.h>


int main()
{
    // To clear the console.
    system("clear");
    printf("Enter the number: ");
    int number;
    scanf("%d",&number);
    int rnumber = 0;
    int sum = 0;
    while (number)
    {
        rnumber *= 10;
        int n = number%10;
        rnumber += n;
        sum += n;
        number /= 10;
    }
    printf("The reversed number is %d.\n",rnumber);
    printf("The sum of the digits is %d.\n",sum);
    return 0;
}