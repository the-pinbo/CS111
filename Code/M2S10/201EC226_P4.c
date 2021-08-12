// Lab 2 Questin 4
// Inbasekaran.P 201EC226

/*
In a town, the percentage of men is 52. 
The percentage of total literacy is 48. 
If total percentage of literate men is 35 of the total population, 
write a program to find the total number of illiterate 
men and women if the population of the town is 80,000.
*/

// Including standard input and output for printing the variables.
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include <stdlib.h>

int main()
{
    // To clear the console.
    system("clear");

    // Men percentage
    double m = .52;

    // The percentage of total literacy is 48 %
    double tlp = .48;

    // Percentage of literate men 35 %
    double lm = .35;

    // Total population of the town
    double total = 80000;

    // Total number of men
    double no_men = m * total;

    // Total number of literate men
    double no_literatemen = lm * no_men;

    // Total number of illiterate men
    double no_illitratemen = no_men - no_literatemen;

    // Total number of women
    double no_woman = total - no_men;

    //Percentage of literate women
    double lw = tlp - lm;

    // Calculating no of iliterate women
    double no_litratewoman = lw * no_woman;
    double no_illitratewoman = no_woman - no_litratewoman;

    // Printing the result
    printf("The number of illitrate men are: %lf.\n", no_illitratemen);
    printf("The number of illitrate woman are: %lf.\n", no_illitratewoman);
    system("pause");
    return 0;
}