// Lab 5.1 Questin 6
// Inbasekaran.P 201EC226
/*Program to find whether an entered year is a leap year or not*/

// For printf() and scanf()
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include <stdlib.h>
// To include bool data type. 
#include <stdbool.h>
 
bool checkYear(int year)
{
    // If a year is multiple of 400,
    if (year % 400 == 0)
        return true;
    // The year is multiple of 4 and not multiple of 100.
    if (year % 4 == 0 && year % 100 != 0)
        return true;
    return false;
}
 
int main()
{
    
    // To clear the console.
    system("clear");
    // input  
    int year = 2000;
    printf("Enter the year: ");
    scanf("%d",&year);
    checkYear(year)? printf("Leap Year"):printf("Not a Leap Year");
    return 0;
}