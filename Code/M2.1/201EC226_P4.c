// Lab 2 Questin 4
// Inbasekaran.P 201EC226 
/*4. Program to accept student roll no, marks in 3 subjects and calculate total,
average of marks and print them with appropriate messages.*/
// Including standard input and output for printing the variables.
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include<stdlib.h>




int main()
{
    // To clear the console.
    system("clear");
    // Declaring variables 
    int rollno;
    // Input Roll Number
    printf("Enter the Roll Number: ");
    scanf("%d",&rollno);
    // Input Marks 
    float m1,m2,m3;
    printf("Enter the marks for subject 1:");
    scanf("%f",&m1);
    printf("Enter the marks for subject 2:");
    scanf("%f",&m2);  
    printf("Enter the marks for subject 3:");
    scanf("%f",&m3);
    // Calculating sum 
    float sum = m1 + m2 + m3;
    // Print sum
    printf("The sum is %f\n",sum);
    // Print average
    printf("The avg is %f\n",sum/3);
    return 0;
}