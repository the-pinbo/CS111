// Lab 2 Questin 3
// Inbasekaran.P 201EC226
/*
3. To read the temperature in Fahrenheit and convert it to degree centigrade.
*/
// Including standard input and output for printing the variables.
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include <stdlib.h>

int main()
{
    // To clear the console.
    system("clear");
    // Declaring variables
    float Fahrenheit, Celsius;
    // Input
    printf("Enter the temperature is Fahrenheit: \n");
    scanf("%f", &Fahrenheit);
    // Calculating celsius from Fahrenheit
    Celsius = ((Fahrenheit - 32) * 5) / 9;
    // Print the temperature in celsius
    printf("Temperature in Celsius is : %f", Celsius);
    system("pause");
    return 0;
}