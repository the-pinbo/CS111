// Lab 2 Questin 1 
// Inbasekaran.P 201EC226 
/*1. The distance between two cities (in km.) is input through the keyboard.
Write a program to convert and print this distance in meters, feet, inches and centimeters. */
// For printf() and scnaf()
#include<stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include<stdlib.h>

int main()
{
    // To clear the console.
    system("clear");
    //Declaring variables
    double dist;
    // Input
    printf("Enter distance between two cities(km):");
    scanf("%lf",&dist);
    // 1 km = 1000 m
    printf("Distance in meters: %lf m.\n",1000*dist);
    // 1 km = 1000*100 cm
    printf("Distance in centimeters: %lf cm.\n",1000*100*dist);
    // 1 km = 3280.84 feet
    printf("Distance in feet: %lf feet.\n",3280.84*dist);
    // 1 km = 39370.1 inches
    printf("Distance in inches: %lf inches.\n",39370.1*dist);

    return 0;
}