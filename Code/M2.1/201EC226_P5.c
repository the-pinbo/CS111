// Lab 2 Questin 5
// Inbasekaran.P 201EC226
/*5. An Employee's Basic Pay (BP) is to be read through keyboard. DA is 40% of
BP, HRA is 20% of BP, calculate the Gross Pay (GP) GP is computed as BP+DA+HRA.*/
// For printf() and scnaf()
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include <stdlib.h>

int main()
{
    // To clear the console.
    system("clear");
    // Declaring Variables
    double BP;
    double DA, HRA, GP;
    //Input
    printf("Enter Employee's Basic Pay:\n");
    scanf("%lf", &BP);
    // Calculating Gross product
    DA = 0.4 * BP;
    HRA = 0.2 * BP;
    GP = BP + DA + HRA;
    //Print Gross Product.
    printf("Gross Product %lf", GP);
    system("pause");
    return 0;
}