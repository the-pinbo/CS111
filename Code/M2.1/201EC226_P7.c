// Lab 2 Questin 7 
// Inbasekaran.P 201EC226 
/*7. Program to swap two numbers using temporary variable. 
Also print the original and exchanged values.*/
// For printf() and scnaf()
#include<stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include<stdlib.h>

int main()
{
    // To clear the console.
    system("clear");
    // Declaring variables 
    int a,b,temp;
    //Input
    printf("Enter the value of a and b:\n");
    scanf("%d %d",&a,&b);
    // Print the values of a and b before swapping 
    printf("Values of a and b before swapping:%d %d \n",a,b);

    //Swap using temp 
    temp = a;
    a = b;
    b = temp;

    // Print the values of a and b after swapping 
    printf("Values of a and b after swapping:%d %d \n",a,b);
    return 0;
}