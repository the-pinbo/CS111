// Lab 2 Questin 3
// Inbasekaran.P 201EC226 

/*
Admission to a professional course in subject to the following conditions:
a) Mathematics >= 60
b) Physics >= 50
c) Chemistry >= 40
d) Total marks >=200
Or
Total marks in physics and mathematics >=150
Given a mark in three subjects, write a program to process the application to the eligible candidates using conditional operators.
*/

// Including standard input and output for printing the variables.
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include<stdlib.h>

int main()
{
    // To clear the console.
    system("clear");

    int m,p,c;
    // Input for maths 
    printf("Enter the Mathematics marks: ");
    scanf("%d",&m);
    // Input for physics
    printf("Enter the Physics  marks: ");
    scanf("%d",&p);
    // Input for chemistry
    printf("Enter the Chemistry marks: ");
    scanf("%d",&c);
    // Calculate Total 
    int total=m+p+c;
    // Conditional operator 
    (((m >= 60) && (p >= 50) && (c >= 40) && (total >= 200)) || ((p + m) >= 150))
    ?(printf("The candidate is Eligible. \n")):(printf("The candidate is NOT Eligible. \n"));
    
    return 0;
}