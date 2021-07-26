// Lab 2 Questin 5 
// Inbasekaran.P 201EC226 
/* If the total selling price of 15 items and the total profit earned on 
them is input through the keyboard, write a program to find the cost price of one item.*/
// For printf() and scnaf()
#include<stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include<stdlib.h>

int main()
{
    // To clear the console.
        system("clear");
    // Declaring variables
    float SP,P;
    // input 
    printf("Enter Selling Price:");
    scanf("%f",&SP);
    printf("Enter Profit:");
    scanf("%f",&P);
    // CP = SP - P  
    printf("Cost Price of each item is: %f\n",(SP-P)/15);
    return 0;  
}